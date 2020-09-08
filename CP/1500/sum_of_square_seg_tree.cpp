#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 1e5+50;
ii tree[4*mxn];
ii lazy[4*mxn];
int a[mxn];

void build(int l, int r, int idx){
	if(l==r){
		tree[idx].F = a[l]*a[l];
		tree[idx].S = a[l];
		return;
	}

	int m = (l+r)/2;
	build(l,m,2*idx);
	build(m+1,r,2*idx+1);

	tree[idx].F = tree[2*idx].F + tree[2*idx+1].F;
	tree[idx].S = tree[2*idx].S + tree[2*idx+1].S; 
}


void update(int l, int r, int i, int tp, int se, int ed, int val){
	if(l>r) return ;
	if(lazy[i].F){
		tree[i].F = lazy[i].F*lazy[i].F*(r-l+1);
		tree[i].S = lazy[i].F*(r-l+1);
		if(l!=r){
			lazy[2*i].S = 0;
			lazy[2*i].F = lazy[i].F;
			lazy[2*i+1].S = 0;
			lazy[2*i+1].F = lazy[i].F;
		}
		lazy[i].F = 0;
	}

	if(lazy[i].S){
		int x = lazy[i].S;
		tree[i].F += x*x*(r-l+1) + 2*x*(tree[i].S);
		tree[i].S += x*(r-l+1);
		if(l!=r){
			lazy[2*i].S +=x;
			lazy[2*i+1].S +=x;  
		}
		lazy[i].S = 0;
	}

	if(se > r || l < ed) return;

	if(l >= se && r <= ed){
		if(tp==0){
			tree[i].F = val*val*(r-l+1);
			tree[i].S = val*(r-l+1);
			if(l!=r){
				lazy[2*i].S = 0;
				lazy[2*i].F = val;
				lazy[2*i+1].S = 0;
				lazy[2*i+1].F = val;
			}
		}else{
			tree[i].F += val*val*(r-l+1) + 2*val*(tree[i].S);
			tree[i].S += val*(r-l+1);
			if(l!=r){
				lazy[2*i].S += val;
				lazy[2*i+1].S += val;
			}
		}
		return;
	} 

	int m = (l+r)/2;
	update(l,m,2*i,tp,se,ed,val);
	update(m+1,r,2*i+1,tp,se,ed,val);
	tree[i].F = tree[2*i].F + tree[2*i+1].F;
	tree[i].S = tree[2*i].S + tree[2*i+1].S;
}

int query(int l, int r, int i, int se, int ed){
	if(l>r) return 0;
	if(lazy[i].F){
		tree[i].F = lazy[i].F*lazy[i].F*(r-l+1);
		tree[i].S = lazy[i].F*(r-l+1);
		if(l!=r){
			lazy[2*i].S = 0;
			lazy[2*i].F = lazy[i].F;
			lazy[2*i+1].S = 0;
			lazy[2*i+1].F = lazy[i].F;
		}
		lazy[i].F = 0;
	}

	if(lazy[i].S){
		int x = lazy[i].S;
		tree[i].F += x*x*(r-l+1) + 2*x*(tree[i].S);
		tree[i].S += x*(r-l+1);
		if(l!=r){
			lazy[2*i].S +=x;
			lazy[2*i+1].S +=x;  
		}
		lazy[i].S = 0;
	}

	if(se > r || l < ed) return 0;
	if(l >= se && r <= ed) return tree[i].F;

	int m = (l+r)/2;
	int x = query(l,m,2*i,se,ed);
	int y = query(m+1,r,2*i+1,se,ed);

	return x + y;

}


int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,q; cin >> n >> q;
		fo(i,n) cin >> a[i];

		build(0,n-1,1);

		while(q--){
			int tp;
			cin >> tp;
			if(tp==0 || tp==1){
				int l,r,val; cin >> l >> r >> val;
				update(0,n-1,1,tp,l-1,r-1,val);
			}else{
				int l,r; cin >> l >> r;
				cout << query(0,n-1,1,l-1,r-1) << endl;
			}
		}
	}
	
	return 0;
}