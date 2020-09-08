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

const int mxn = 110;
vi g[mxn];
bool vis[mxn];
set<int>a;

void dfs(int v){
	vis[v] = 1;
	a.insert(v);
	for(int u : g[v]) if(!vis[u]) dfs(u);
}

int32_t main(){
	NINJA;
  	freopen("factory.in", "rt", stdin);
 	freopen("factory.out", "wt", stdout);
	vector<set<int>> store;
	int n; cin >> n;
	for1(i,n-1){
		int u,v; cin >> u >> v;
		g[u].pb(v);
	}

	vi ans;
	for1(i,n){
		if(sz(g[i])==0){
			ans.pb(i);
		}
	}
	if(sz(ans)==1){
		cout << ans[0] << endl;
		return 0;
	}

	// for1(i,n){
	// 	memset(vis,false,sizeof(vis));
	// 	a.clear();
	// 	dfs(i);
	// 	store.pb(a);
	// }
	// bool ok = 0;
	// for1(i,n){
	// 	bool f = 1;
	// 	for(auto each : store){
	// 		ok &= (each.find(i)!=each.end());
	// 	}
	// 	if(f){
	// 		cout << i << endl;
	// 		return 0;
	// 	}
	// }
	cout << -1 << endl;
	
	return 0;
}