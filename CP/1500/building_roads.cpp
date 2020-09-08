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

const int mxn = 2e5+500;
vi g[mxn];
int n,m;
bool vis[mxn];

void dfs(int v, vi &comp){
	if(vis[v]) return;
	comp.pb(v);
	vis[v]  =true;

	for(auto u : g[v]){
		if(!vis[u]){
			dfs(u,comp);
		}
	}
}

int main(){
	NINJA;

	cin >> n >> m;
	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		g[s].pb(f);
	}

	vector<vi> store;

	Fo(i,1,n+1){
		if(!vis[i]){
			vi comp;
			dfs(i,comp);
			store.pb(comp);
		}
	}

	cout << sz(store) -1 << endl;
	fo(i,sz(store)-1){
		cout << store[i][0] << " " << store[i+1][0] << endl;
	}

	return 0;
}