#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

vi g[101];
int vis[101],low[101],in[101];
int timer;

void dfs(int v, int par){
	vis[v] = 1;
	low[v] = in[v] = timer++;

	for(int u: g[v]){
		if(u==par) continue;
		if(vis[u]) low[v] = min(low[v],in[u]);
		else{
			dfs(u,v);
			if(low[u] > in[v]) cout << v << " -> " << u << " is a bridge\n";
			low[v] = min(low[v],low[u]);
		}
 	}
}

int main(){
	NINJA;
	int n,m; cin >> n >> m;

	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		g[s].pb(f);
	}

	dfs(1,-1);

	return 0;
}