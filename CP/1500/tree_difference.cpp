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

const int mxn = 2e5+10;
vi g[mxn];
bool vis[mxn];
int a[mxn];
vi stk;

void dfs(int x, int y){
	stk.pb(x);
	if(x==y){
		return;
	}
	vis[x] = true;

	int f = 0;
	if(!g[x].empty()){
		for(auto v : g[x]){
			if(!vis[v]){
				dfs(v,y);
				f = 1;
			}
		}
	}
	
	if(f==0) stk.pop_back();
}


int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,q; cin >> n >> q;

		fo(i,n) cin >> a[i+1];

		for(int i=1;i<=n;i++) g[i].clear();

		fo(i,n-1){
			int f,s; cin >> f >> s;
			g[f].pb(s);
			g[s].pb(f);
		}

		while(q--){
			int f,s; cin >> f >> s;
			for(int i=1;i<=n;i++) vis[i] = false;
			stk.clear();
			dfs(f,s);

			for(int i : stk) cout << i << " ";
			cout << endl;
		}
	}
	
	return 0;
}