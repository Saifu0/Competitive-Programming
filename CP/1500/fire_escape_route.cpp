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

const int mxn = 1e5+500;
vi g[mxn+1];
vector<bool> vis(mxn+1,false);

void dfs(int v, vi&comp){
	comp.pb(v);
	vis[v] = true;

	for(auto u : g[v]){
		if(!vis[u]) dfs(u,comp);
	}

}

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,e; cin >> n >> e;

		Fo(i,1,n+1) vis[i] = false, g[i].clear();

		fo(i,e){
			int f,s; cin >> f >> s;
			g[f].pb(s);
			g[s].pb(f);
		}

	//	vector<vector<int> > store;

		int cnt = 0, mul = 1;
		Fo(i,1,n+1){
			if(!vis[i]){
				cnt++;
				vi comp;
				dfs(i,comp);
				mul *= comp.size();
			}
		}

		cout << cnt << " " << mul << endl;
	}

	return 0;
}