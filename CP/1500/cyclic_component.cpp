// #include<bits/stdc++.h>
// using namespace std;

// #define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,k,n) for(int i=k;i<n;i++)
// #define iii tuple<int,int,int>
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define int long long
// #define pb push_back
// #define endl "\n"
// #define setbits __builtin_popcountll
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007
// #define inf (int)1e18

// const int mxn = 2e5+50;
// vi g[mxn];
// bool vis[mxn];
// bool ok;
// int n,m;
// vi comp;
// int deg[mxn];

// bool dfs(int v){
// 	vis[v] = 1;
// 	comp.pb(v);
// 	for(auto u : g[v]){
// 		if(!vis[u]) dfs(u);
// 	}

// 	return false;
// }

// int32_t main(){
// 	NINJA;

// 	cin >> n >> m;
// 	fo(i,m){
// 		int f,s; cin >> f >> s;
// 		g[f].pb(s);
// 		g[s].pb(f);
// 		deg[f]++;
// 		deg[s]++;
// 	}
// 	int cnt = 0;

// 	for(int i=1;i<=n;i++){
// 		if(!vis[i]){
// 			comp.clear();
// 			dfs(i);
// 			bool ok = 1;

// 			for(int it : comp) ok &= deg[it] == 2;
// 			if(ok) cnt++;
// 		}
// 	}

// 	cout << cnt << endl;
	
// 	return 0;
// }

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
int deg[mxn];
int n,m;
vi c;

void dfs(int v){
	vis[v] = true;
	c.pb(v);
	for(auto u : g[v]){
		if(!vis[u]) dfs(u);
	}
}

int32_t main(){
	NINJA;

	cin >> n >> m;
	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		g[s].pb(f);
		deg[f]++;
		deg[s]++;
	}

	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			c.clear();
			dfs(i);
			bool ok = true;
			for(auto u : c) ok = ok && (deg[u]==2);
			if(ok) cnt++;
		}
	}

	cout << cnt << endl;
	
	return 0;
}