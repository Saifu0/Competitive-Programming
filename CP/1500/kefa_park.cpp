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
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 1e5+10;
vi g[mxn];
int c[mxn];
int s;
int n,m;

void dfs(int v, int p, int h){
	if(c[v]) h++;
	else h=0;

	if(h > m) return;
	bool ok = 1;
	for(int u : g[v]){
		if(u!=p){
			ok = 0;
			dfs(u,v,h);
		}
	}
	if(ok) s++;
}

int32_t main(){
	NINJA;

	cin >> n >> m; 
	for1(i,n) cin >> c[i];
	fo(i,n-1){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}

	dfs(1,-1,0);
	cout << s << endl;
	
	return 0;
}