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

const int mxn = 2e5;
int deg[mxn];
bool vis[mxn];
vi g[mxn];
vi cmp;

void dfs(int v){
	vis[v] = 1;
	cmp.pb(v);

	for(int u : g[v]) if(!vis[u]) dfs(u);
}

int32_t main(){
	NINJA;

	int n,m; cin >> n >> m;
	fo(i,m){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
		deg[u]++;
		deg[v]++;
	}

	bool ok = 1;
	
	for1(i,n){
		if(!vis[i]){
			cmp.clear();
			dfs(i);
			int len = sz(cmp);
			for(int it : cmp){
				ok = ok && ( deg[it] == len -1 ? 1 : 0);
			}
			if(!ok) break;
		}
	}

	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}