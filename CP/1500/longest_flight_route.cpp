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
int n,m;
bool vis[mxn];
vi a;


void dfs(int v){
	vis[v] = 1;
	for(auto u : g[v]){
		if(!vis[u]) dfs(u);
	}
	a.pb(v);
}

int q[mxn];

int32_t main(){
	NINJA;

	cin >> n >> m;
	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
	}

	Fo(i,1,n+1){
		if(!vis[i]){
			dfs(i);
		}
	}
	

	reverse(a.begin(), a.end());

	//for(auto i : a) cout << i << " ";

	vi d(n+1,-1);

	for(int i=0;i<n;i++){
		int u = a[i];
		if(u==n) break;

		if(u==1) d[u] = 1;
		if(d[u]>0){
			for(auto v : g[u]){
				if(d[v] < d[u] + 1) d[v] = d[u]+1, q[v] = u;
			}
		}
	}
	
	if(d[n]<0){
		cout << "IMPOSSIBLE" << endl;
		return 0;
	}

	vi ans(1,n);
	int u = n;

	while(u!=1) u = q[u], ans.pb(u);

	reverse(ans.begin(), ans.end());

	cout << sz(ans) << endl;
	for(auto i : ans) cout << i << " ";

	cout << endl;

	return 0;
}