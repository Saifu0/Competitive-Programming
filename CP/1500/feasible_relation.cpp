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

const int mxn = 1e6+500;
vector<int> g[mxn];
vector<bool> vis(mxn);

void dfs(int v, unordered_set<int> &comp){
	vis[v] = true;
	comp.insert(v);

	for(int u: g[v]){
		if(!vis[u]){
			dfs(u,comp);
		}
	}
}


int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;


		Fo(i,1,n+1) g[i].clear() , vis[i] = false;

		vector<pair<int,int>> ss;

		fo(i,m){
			int a,b;
			string op;
			cin >> a >> op >> b;
			if(op=="=") {
				g[a].pb(b);
				g[b].pb(a);
			}else{
				ss.pb({a,b});
			}
		}

		vector<unordered_set<int> > comps;

		Fo(i,1,n+1){
			if(!vis[i]){
				unordered_set<int> comp;
				dfs(i,comp);
				comps.pb(comp);
			}
		}


		bool flag = true;
		for(auto it : comps){
			for(auto i : ss){
				if(it.find(i.F)!=it.end() && it.find(i.S)!=it.end()){
					flag = false;
					break;
				}
			}
		}

		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}