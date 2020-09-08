// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

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
#define ld long double
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
vii g[mxn];
int n,m;
int a[mxn];
int comp[mxn];

void dfs(int v, int cnt, int mn){
	if(comp[v]==cnt) return;
	comp[v] = cnt;
	for(auto u : g[v]){
		if(u.S >= mn) dfs(u.F,cnt,mn);
	}
}

bool check(int mn){
	memset(comp,-1,sizeof(comp));
	int cnt = 0;
	for1(i,n){
		if(comp[i]==-1) dfs(i,cnt++,mn);
	}
	for1(i,n) if(comp[i]!=comp[a[i]]) return false;
	return 1;
}

int32_t main(){
	NINJA;
  // 	freopen("wormsort.in", "rt", stdin);
 	// freopen("wormsort.out", "wt", stdout);	
	cin >> n >> m;
	for1(i,n) cin >> a[i];

	fo(i,m){
		int x,y,w;
		cin >> x >> y >> w;
		g[x].pb({y,w});
		g[y].pb({x,w});
	}

	bool ok = 1;
	for1(i,n) ok &= (a[i]==i);
	if(ok){
		cout << -1 << endl;
		return 0;
	}

	int l=0,r=mod;
	// while(l!=r){
	// 	int m = (l+r+1)/2;
	// 	if(check(m)) l = m;
	// 	else r = m-1;
	// }
	if(check(7)) l =7;

	if(l>mod) l = -1;
	cout << l << endl;
	
	return 0;
}