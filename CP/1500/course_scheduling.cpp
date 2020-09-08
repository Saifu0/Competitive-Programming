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
bool vis[mxn];
vi a;
int n,m;
int dist[mxn];
int t;

void dfs(int v){
	vis[v] = true;

	for(auto u : g[v]){
		if(!vis[u]){
			dfs(u);
		}
	}
	dist[v] = t++;
	a.pb(v);
}

// bool isCycle(int v, int par){
// 	vis[v] = true;

// 	for(auto u : g[v]){
// 		if(vis[u] && u!=v && u!=par) return true;
// 		if(!vis[u] && isCycle(u,v)) return true;
// 	}

// 	return false;
// }

int32_t main(){
	NINJA;

	cin >> n >> m;
	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
	}

	bool f = false;

	

	//Fo(i,1,n+1) vis[i] = false;

	Fo(i,1,n+1){
		if(!vis[i]){
			dfs(i);
		}
	}

	for(int i=1;i<=n;i++){
		for(auto u : g[i]){
			if(dist[i] <= dist[u]){
				f = true;
				break;
			}
		}
	}

	if(f){
		cout << "IMPOSSIBLE" << endl;
		return 0;
	}

	reverse(a.begin(), a.end());

	for(auto it : a) cout << it << " ";
	cout << endl;
	
	return 0;
}