#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 100006;
int tree[4*mxn];
int lazy[4*mxn];

void update(int ind, int start, int end, int l, int r){
	if(lazy[ind]==1){
		tree[ind] = end-start+1-tree[ind];
		if(start!=end){
			lazy[2*ind] = !lazy[2*ind];
			lazy[2*ind+1] = !lazy[2*ind+1];
		}
		lazy[ind] = 0;
	}

	if(start>end || start>r || end <l) return;
	if(l<=start && r>=end){
		tree[ind] = end-start+1-tree[ind];
		if(start!=end){
			lazy[2*ind] = !lazy[2*ind];
			lazy[2*ind+1] = !lazy[2*ind+1];
		}
		lazy[ind] = 0;
		return;
	}
	int mid = (start+end)/2;
	update(2*ind,start,mid,l,r);
	update(2*ind+1,mid+1,end,l,r);
	tree[ind] = tree[2*ind] + tree[2*ind+1]; 
}

int query(int ind, int start, int end, int l, int r){
	if(lazy[ind]==1){
		tree[ind] = end-start+1-tree[ind];
		if(start!=end){
			lazy[2*ind] = !lazy[2*ind];
			lazy[2*ind+1] = !lazy[2*ind+1];
		}
		lazy[ind] = 0;
	}
	if(start>end || start>r || end <l) return 0;
	if(l<=start&&r>=end) return tree[ind];
	int mid = (start+end)/2;
	int left = query(2*ind,start,mid,l,r);
	int right = query(2*ind+1,mid+1,end,l,r);

	return left+right;
}

int main(){
	NINJA;
	int n,q; cin >> n >> q;
	fo(i,4*mxn) lazy[i] = tree[i] = 0;

	while(q--){
		int t,l,r; cin >> t >> l >> r;
		l++,r++;
		if(t==0){
			update(1,1,n,l,r);
		}else{
			cout << query(1,1,n,l,r) << endl;
		}
	}

	return 0;
}