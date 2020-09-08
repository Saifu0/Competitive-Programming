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
int good[mxn];
int bad[mxn];
int tot[mxn];
int h[mxn];
int p[mxn];
int n,m;
bool pos = 1;

void dfs(int v,int par){
	int badchild = 0;
	tot[v] = p[v];
	for(int u:g[v]){
		if(u!=par){
			dfs(u,v);
			tot[v] += tot[u];
			badchild += bad[u];
		}
	}
	if(h[v] > tot[v]) pos=0;
	if(h[v] < -tot[v]) pos=0;
	if((tot[v]+h[v])%2==1) pos=0;
	good[v] = (tot[v]+h[v])/2;
	bad[v] = (tot[v]-h[v])/2;
	if(bad[v] > p[v]+badchild) pos=0;
}

void init(){
	fo(i,mxn) g[i].clear(); 
	pos=1;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		init();
		cin >> n >> m;
		for1(i,n) cin >> p[i];
		for1(i,n) cin >> h[i];
		fo(i,n-1){
			int u,v; cin >> u >> v;
			g[u].pb(v);
			g[v].pb(u);
		}
		dfs(1,-1);
		if(pos) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}