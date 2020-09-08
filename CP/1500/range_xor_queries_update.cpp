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

const int mxn = 2e5+50;
int tree[4*mxn];
int a[mxn];

void build(int l, int r, int i){
	if(l==r){
		tree[i] = a[l];
		return;
	}

	int m = (l+r)/2;
	build(l,m,2*i);
	build(m+1,r,2*i+1);

	tree[i] = tree[2*i]^tree[2*i+1];
}

int query(int l, int r, int i, int se, int ed){
	if(se > r || ed < l) return 0;
	if(l>=se && r <= ed) return tree[i];

	int m = (l+r)/2;
	int x = query(l,m,2*i,se,ed);
	int y = query(m+1,r,2*i+1,se,ed);

	return x^y;
}

void update(int l, int r, int i, int id, int val){
	if(l==r){
		tree[i] += val;
		a[l] += val;
		return;
	}

	int m = (l+r)/2;
	if(id<=m) update(l,m,2*i,id,val);
	else update(m+1,r,2*id+1,id,val);

	tree[i] = tree[2*i] ^ tree[2*i+1];
}

int32_t main(){
	NINJA;

	int n,q; cin >> n >> q;
	fo(i,n) cin >> a[i];

	build(0,n-1,1);

	while(q--){
		int t;
		cin >> t;
		int l,r; cin >> l >> r;
		if(t==2) cout << query(0,n-1,1,l-1,r-1) << endl;
		else update(0,n-1,1,l-1,r);
	}
	
	return 0;
}