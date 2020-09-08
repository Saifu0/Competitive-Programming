#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 2e5+500;
vi g[mxn];
bool vis[mxn];
int n,m;
int ans[mxn];

bool dfs(int v, int tog){
	vis[v]  = true;
	ans[v] = tog;
	
	for(auto u : g[v]){
		if(!vis[u]){
			if(dfs(u,tog^1)==false) return false;
		}else{
			if(ans[v]==ans[u]) return false;
		}
	}
	
	return true;
}


int32_t main(){
	NINJA;
	
	
	cin >> n >> m;
	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		g[s].pb(f);
	}
	
	bool f = true;
	
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			f = dfs(i,1);
			if(!f) break;
		}
	}
	
	if(!f) cout << "IMPOSSIBLE" << endl;
	else{
		for(int i=1;i<=n;i++){
			if(ans[i]) cout << 1 << " ";
			else cout << 2 << " ";
		}
		cout << endl;
	}
	

	return 0;
}

