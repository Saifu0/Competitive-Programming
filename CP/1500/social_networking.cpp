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

const int mxn = 1e6+500;
vi g[mxn];
bool vis[mxn];
int lvl[mxn];
int dist[mxn];

void bfs(int v){
	queue<int> q;
	q.push(v);
	vis[v] = true;
	dist[v] = 0;

	while(!q.empty()){
		int top = q.front();
		q.pop();

		for(int u : g[top]){
			if(!vis[u]){
				dist[u] = dist[top] + 1;
				vis[u] = 1;
				q.push(u);
				lvl[dist[u]]++;
			}
		}
	}
}

int main(){
	NINJA;
	int n,m; cin >> n >> m;

	fo(i,m){
		int f,s; cin >>f >> s;
		g[f].pb(s);
		g[s].pb(f);
	}

	int q; cin >> q;
	while(q--){
		int s,d; cin >> s >> d;

		fo(i,n+1) lvl[i] = 0, vis[i] = 0;
		bfs(s);

		cout << lvl[d] << endl;
	}


	return 0;
}