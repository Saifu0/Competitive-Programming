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

const int mxn = 1e5+10;
vi g[mxn];
int a[mxn];
int n,m;
bool vis[mxn];
int timeIn[mxn];
int timeOut[mxn];
int timer;
vi lvl[mxn];
int level[mxn];

void dfs(int v){
	timeIn[v] = timer++;
	vis[v] = 1;

	for(auto u : g[v]){
		if(!vis[u]) dfs(u);
	}

	timeOut[v] = timer++;
}

void bfs(int v){
	queue<int> q;
	vector<bool> vis2(n+1,false);

	vis2[v] = 1;
	q.push(v);
	level[v] = 1;
	while(!q.empty()){
		int u = q.front();
		q.pop();

		for(auto it : g[u]){
			if(!vis2[it]){
				level[it] = level[u] +1 ;
				q.push(it);
				vis2[it] = 1;
			}
		}
	}

	for(int i=1;i<=n;i++){
		lvl[level[i]].pb(i);
	}
}

bool isAncestor(int v, int u){
	return (timeIn[v] <= timeIn[u] && timeOut[u] <= timeOut[v]);
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		timer = 0;
		for(int i=1;i<=n;i++){
			a[i] = 0;
			g[i].clear();
			vis[i] = false;
			timeIn[i] = 0;
			timeOut[i] = 0;
			lvl[i].clear();
			level[i] = 0;
		}

		fo(i,n) cin >> a[i+1];

		fo(i,n-1){
			int f,s; cin >> f >> s;
			g[f].pb(s);
			g[s].pb(f);
		}

		dfs(1);
		bfs(1);

		while(m--){
			int u,l;
			cin >> u >> l;

			int sum = 0;
			for(auto it : lvl[l]){
				if(isAncestor(u,it)) sum += a[it];
			}

			cout << sum << endl;
		}


	}
	
	return 0;
} 