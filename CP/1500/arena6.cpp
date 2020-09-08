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

const int mxn = 1e5+50;
vi g[mxn];
bool vis[mxn];
int anc[mxn];
stack<int> st[mxn];
int clr[mxn];
int n,c;

void dfs(int v){
	vis[v] = 1;
	if(st[clr[v]].empty()){
		anc[v] = -1;
	}else{
		anc[v] = st[clr[v]].top();
	}

	st[clr[v]].push(v);

	for(auto u : g[v]){
		if(!vis[u]){
			dfs(u);
		}
	}

	st[clr[v]].pop();
}



int32_t main(){
	NINJA;

	cin >> n >> c;
	int k=2;
	for(int i=2;i<=n;i++){
		int x; cin >> x;
		g[x].pb(i);
		//g[i].pb(x);	
	}

	fo(i,n) cin >> clr[i+1];

	dfs(1);

	for(int i=1;i<=n;i++) cout << anc[i] << " ";


	
	
	return 0;
}