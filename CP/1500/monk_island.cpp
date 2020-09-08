#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 12345;
vi g[mxn];
vector<bool> vis(mxn,false);
int dist[mxn];

void bfs(int v){
	queue<int> q;
	q.push(v);
	vis[v] = 1;
	dist[v] = 0;

	while(!q.empty()){
		int t = q.front();
		q.pop();

		for(int u : g[v]){
			if(!vis[u]){
				vis[u] = 1;
				dist[u] = dist[t] +  1;
				q.push(u);
			}
		}
	}
}

int main(){
	NINJA;

	int t; cin >>t;
	while(t--){
		int n,m; cin >> n >> m;
		Fo(i,1,n+1) vis[i] = false, g[i].clear();

		fo(i,m){
			int f,s; cin >> f >> s;
			g[f].pb(s);
			g[s].pb(f);
		}

		bfs(1);

		cout << dist[n] << endl;
	}

	return 0;
}