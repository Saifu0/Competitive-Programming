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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 10010;
vi g[mxn];
bool vis[mxn];
int n,m;

void dfs(int v){
	vis[v] = 1;
	for(auto u : g[v]){
		if(!vis[u]) dfs(u);
	}
}



int32_t main(){
	NINJA;

	cin >> n >> m;


	fo(i,m){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}

	if(n-1!=m){
		cout << "NO" << endl;
		return 0;
	}

	dfs(1);
	// bool cycle = iscycle(1,-1);

	bool ok = true;	
	for1(i,n) ok = ok && (vis[i]==true);

	if(ok && n-1==m) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}