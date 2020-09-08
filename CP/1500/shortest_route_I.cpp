#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int inf = 1e18;
const int mxn = 1e5+500;
vii g[mxn];
int d[mxn];
bool vis[mxn];
int n,m;

void bfs(int v){
	for(int i=1;i<=n;i++) d[i] = inf;
	d[v] = 0;
	
	priority_queue<ii> q;
	q.push({0,v});
//	vis[v] = true;
	
	while(!q.empty()){
		int a = q.top().S;
		q.pop();
		if(vis[a]) continue;
		vis[a] = true;
		
		for(auto u : g[a]){
			
				int b = u.F, w=u.S;
				if(d[a]+w < d[b]){
					d[b] = d[a] + w;
					q.push({-d[b],b});
				}
			
		}
	}
}

int32_t main(){
	NINJA;
	
	cin >> n >> m;
	fo(i,m){
		int f,s,w; cin >> f >> s >> w;
		g[f].pb({s,w});
	}
	
	bfs(1);
	
	for(int i=1;i<=n;i++){
		cout << d[i] << " ";
	}
	

	return 0;
}

