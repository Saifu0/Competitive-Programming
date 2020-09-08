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

const int mxn = 2e5+5;
vi g[mxn];
int n,m,a,b,c;

vi bfs(int src){
	queue<int>q;
	vector<bool> vis(n+1,false);
	vi d(n+1,0);
	
	vis[src]  = 1;
	q.push(src);
	
	while(!q.empty()){
		int top = q.front();
		q.pop();
		
		for(auto u : g[top]){
			if(!vis[u]){
				vis[u] = true;
				d[u] = d[top] + 1;
				q.push(u);
			}
		}
	}
	return d;
}

int32_t main(){
	NINJA;
	
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> a >> b >> c;
		int p[m+1];
		
		Fo(i,1,m+1) cin >> p[i];
		
		Fo(i,1,n+1) g[i].clear();
		
		p[0] = 0;
		
		sort(p+1,p+1+m);
		
		Fo(i,1,m+1) p[i] += p[i-1];
		
		fo(i,m){
			int f,s; cin >> f >> s;
			g[f].pb(s);
			g[s].pb(f);
		}
		
		vi ad = bfs(a);
		vi bd = bfs(b);
		vi cd = bfs(c);
		
//		Fo(i,1,n+1){
//			cout << ad[i] << " " << bd[i] << " " << cd[i] << endl;
//		}
//			
		int inf = 1e18;
		
		for(int d=1;d<=n;d++){
			int id = ad[d] + bd[d] + cd[d];
			int extra = bd[d];
			
			if(id > m) continue;
			
			int tot = p[id] + p[extra];
			
			inf = min(inf,tot);
			
		}
		
		cout << inf << endl;
	}
	

	return 0;
}

