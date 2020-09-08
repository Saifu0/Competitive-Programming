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
int n; 
vi x;
int a[mxn],b[mxn];

void dfs(int v, int p, int z, int y){
	a[v] ^= z;
	if(a[v] != b[v]){
		x.pb(v);
		z ^= 1;
	}

	for(auto u : g[v]){
		if(u != p) dfs(u,v,y,z);
	}
}

int32_t main(){
	NINJA;
	cin >> n;
	fo(i,n-1){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		g[s].pb(f);
	}

	fo(i,n) cin >> a[i+1];
	fo(i,n) cin >> b[i+1];
	x.clear();
	dfs(1,-1,0,0);

	cout << sz(x) << endl;
	for(auto i : x) cout << i << endl;
	
	return 0;
}