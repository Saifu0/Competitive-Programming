#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
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

const int mxn = 1e5+10;
int a[mxn];
int n,q;
int pref[mxn];
int tree[4*mxn];

void build(int l, int r, int i){
	if(l==r){
		tree[i] = a[l];
		return;
	}
	int m = (l+r)/2;
	build(l,m,2*i);
	build(m+1,r,2*i+1);

	tree[i] = max(tree[2*i],tree[2*i+1]);
}

int query(int l, int r,int i, int start, int end){
	if(start > r || end < l) return -inf;
	if(l >= start && r <= end) return tree[i];

	int m = (l+r)/2;
	int x = query(l,m,2*i,start,end);
	int y = query(m+1,r,2*i+1,start,end);

	return max(x,y);
}

int32_t main(){
	NINJA;

	cin >> n;
	fo(i,n) cin >> a[i], pref[i+1] = pref[i] + a[i];

	build(0,n-1,1);
	cin >> q;

	while(q--){
		int l,r; cin >> l >> r;
		
		int mn = query(0,n-1,1,l,r);
		l++,r++;
		cout << pref[r] - pref[l-1] - mn << endl;
	}
	
	return 0;
}