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
int a[mxn];

void build(int l, int r, int idx){
	if(l==r){
		tree[idx].F = a[l];
		tree[idx].S = -inf;
		return;
	}

	int m = (l+r)/2;

	build(l,m,2*idx);
	build(m+1,r,2*idx+1);

	tree[idx].F = max(tree[2*idx].F,tree[idx*2+1].F);
	tree[idx].S = min(max(tree[2*idx].F,tree[2*idx+1].S),max(tree[2*idx+1].F,tree[2*idx].S));
}

ii query(int l, int r, int idx, int se, int ed){
	if(l > ed || r < se){
		ii ans;
		ans.F = ans.S = -inf;
		return ans;
	}

	if(l>=se && ed >= r) return tree[idx];

	int m = (l+r)/2;

	ii x = query(l,m,2*idx,se,ed);
	ii y = query(m+1,r,2*idx+1,se,ed);

	ii ans;

	ans.F = max(x.F,y.F);
	ans.S = min(max(x.F,y.S),max(x.S,y.F));
	return ans;

}

void update(int l, int r, int idx, int id, int val){
	if(l==r){
		a[id] = val;
		tree[idx].F = val;
		tree[idx].S = -inf;
		return;
 	}

 	int m = (l+r)/2;
 	if(id<=m) update(l,m,2*idx,id,val);
 	else update(m+1,r,2*idx+1,id,val);

 	tree[idx].F = max(tree[2*idx].F,tree[idx*2+1].F);
	tree[idx].S = min(max(tree[2*idx].F,tree[2*idx+1].S),max(tree[2*idx+1].F,tree[2*idx].S));

}	


int32_t main(){
	NINJA;

	int n; cin >> n;
	fo(i,n) cin >> a[i];

	build(0,n-1,1);

	int q; cin >> q;
	while(q--){
		char ch;
		int l,r; cin >> ch >> l >> r ;

		if(ch=='Q'){
			ii ans= query(0,n-1,1,l-1,r-1);
			cout << ans.F+ans.S << endl;
		}else{
			update(0,n-1,1,l-1,r);
		}
	}
	
	return 0;
}