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


const int mxn = 1e3+10;
vi g[mxn];
int c[mxn];
bool vis[mxn];
int n,m;
vi comp;

void dfs(int v){
	vis[v] = 1;
	comp.pb(v);

	for(int u : g[v]){
		if(!vis[u]) dfs(u);
	}
}

int32_t main(){
	NINJA;

	cin >> n;
	fo(i,n) cin >> c[i+1];

	cin >> m;
	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		g[s].pb(f);
	}
	int ans = 1;
	//vector<vi> comps;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			comp.clear();
			dfs(i);
			int mn = inf;
			for(int j : comp){
				mn = min(mn,c[j]);
			}

			//comps.pb(comp);
			int cnt = 0;
			//int ans = 0;
			for(int j : comp){
				if(c[j]==mn) cnt++;
			}
			ans = (ans*cnt)%mod;
		}
	}
	cout << ans << endl;

	// int cnt = 0;

	// for(auto v : comps){
	// 	for(auto )
	// }
	
	return 0;
}