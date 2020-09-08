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
vector<ii> g[mxn];
bool vis[mxn];
vi t;
int n,m;

void dfs(int v){
	vis[v] = 1;
	for(auto u : g[v]){
		if(!vis[u.F]){
			dfs(u.F);
		}
	}
	t.pb(v);
}

int32_t main(){
	NINJA;

	cin >> n >> m;

	fo(i,m){
		int f,s,w; cin >> f >> s >> w;
		g[f].pb({s,w});
	}

	dfs(1);
	reverse(t.begin(), t.end());
	vi dp(n+1,inf);

	dp[1] = 0;

	for(auto v : t){
		for(auto u : g[v]){
			if(dp[u.F] > dp[v] + u.S ) dp[u.F] = dp[v] + u.S;
		}
	}

	for(int i=1;i<=n;i++) cout << dp[i] << " ";

	cout << endl;
	
	return 0;
}