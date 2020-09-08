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

const int mxn = 110;
int deg[mxn];
vi g[mxn];

int32_t main(){
	NINJA;

	int n,m; cin >> n >> m;
	fo(i,m){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
		deg[u]++;
		deg[v]++;
	}

	int cnt =0;
	while(1){
		vi a;
		for1(i,n){
			if(deg[i]==1) a.pb(i);
		}

		if(sz(a)==0) break;
		fo(i,sz(a)) deg[a[i]] = 0;

		for(int u : a){
			for(int v : g[u]){
				deg[v]--;
			}
		}
		cnt++;
	}
	cout << cnt << endl;
	
	return 0;
}