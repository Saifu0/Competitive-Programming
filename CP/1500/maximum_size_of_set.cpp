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

const int mxn = 1e6+10;
vi g[mxn];
vi comp;
bool vis[mxn];

void dfs(int v){
	vis[v] = 1;
	comp.pb(v);

	for(auto u : g[v]){
		if(!vis[u]) dfs(u);
	}
}

int32_t main(){
	NINJA;

	int n,m; cin >> n >> m;

	fo(i,m){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		// g[v].pb(u);
	}

	int mx = -inf;

	Fo(i,1,n+1){
		if(!vis[i]){
			comp.clear();
			dfs(i);
			mx = max(mx,sz(comp));
		}
	}

	cout << mx <<endl;
	
	return 0;
}

