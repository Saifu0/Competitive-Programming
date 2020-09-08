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

vi g[110];
bool vis[110];
int n,m;
stack<int> s;

void dfs(int v){
	vis[v] = 1;
	for(int u : g[v]){
		if(!vis[u]) dfs(u);
	}
	s.push(v);
}

int32_t main(){
	NINJA;

	cin >> n >> m;
	while(n!=0 || m!=0){
		for1(i,n) vis[i] = false, g[i].clear();
		fo(i,m){
			int u,v; cin >> u >> v;
			g[u].pb(v);
			// g[v].pb(u);
		}

		for1(i,n){
			if(!vis[i]){
				dfs(i);
			}
		}

		while(!s.empty()){
			cout << s.top() << " ";
			s.pop();
		}
		cout << endl;
		cin >> n >> m;
	}
	
	
	
	return 0;
}