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

const int mxn = 1e5+500;
vi g[mxn];
bool vis[mxn];
int dp[mxn];
int n,m;
vi topo;

void dfs(int v){
	vis[v] = 1;
	for(auto u : g[v]){
		if(!vis[u]) dfs(u);
	}
	topo.pb(v);
}

int32_t main(){
	NINJA;

	cin >> n >> m;

	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		//g[s].pb(f);
	}

	dfs(1);

	dp[n] = 1;
	fo(i,sz(topo)){
		for(auto u : g[topo[i]]){
			dp[topo[i]] = (dp[topo[i]] + dp[u])%mod;
		}
	}

	//for(int i=1;i<=n;i++) cout << dp[i] << " ";

	cout << dp[1]%mod << endl;
	
	return 0;
}