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
int vis[mxn][2];
bool check[mxn];
int n,m;
vi ans;
int parent[mxn];
int color[mxn];

bool cyc(int s){
	color[s] = 1;
	bool res = 0;
	for(auto u : g[s]){
		if(!color[u]) res |= cyc(u);
		else if(color[u]==1) return true;
	}
	color[s] = 2;
	return res;
}

bool dfs(int v, bool state){
	vis[v][state] = 1;
	
	if(!state && g[v].size()==0){
		ans.pb(v);
		return true;
	}

	for(auto u : g[v]){
		parent[u] = v;
		if(!vis[u][!state] && dfs(u,!state)){
			ans.pb(v);
			return true;
		}
	}
	return false;
}

int32_t main(){
	NINJA;

	cin >> n >> m;
	fo(i,n){
		int k; cin >> k;
		fo(j,k){
			int x; cin >> x;
			g[i+1].pb(x);
		}
	}
	int s; cin >> s;

	bool f = dfs(s,1);
	if(f){
		cout << "Win" << endl;
		reverse(ans.begin(), ans.end());
		for(auto it : ans) cout << it << " ";
		return 0;
	}if(cyc(s)){
		cout << "Draw" << endl;
		return 0;
	}
	cout << "Lose" << endl;

	
	return 0;
}