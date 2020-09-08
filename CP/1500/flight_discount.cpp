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

typedef tuple<int,int,int> iii;
typedef priority_queue<ii, vii, greater<ii>> q;

const int inf = 1e18;

void bfs(vii g[], vi &d, int v){
	q q;
	q.push({0,v});
	while(!q.empty()){
		int c,u,v,w;
		tie(c,u) = q.top();
		q.pop();
		if(d[u] < c) continue;
		for(auto x : g[u]){
			tie(v,w) = x;
			if(c+w < d[v]){
				d[v] = c+w;
				q.push({d[v],v});
			}
		}
	}
}

int32_t main(){
	NINJA;
	
	int n,m;
	cin >> n >> m;
	
	vii g[n];
	vii h[n];
	vector<iii> e(n);
	fo(i,m){
		int f,s,w; cin >> f >> s >> w;
		--f,--s;
		g[f].pb({s,w});
		h[s].pb({f,w});
		e.emplace_back(f,s,w);
	}
	
	vi d(n,inf),dd(n,inf);
	bfs(g,d,0);
	bfs(h,dd,n-1);
	d[0] = 0;
	dd[n-1] = 0;
	
	int r = inf;
	for(auto i : e){
		int a,b,c;
		tie(a,b,c) = i;
		r = min(r,d[a]+dd[b]+c/2);
	}
	
	cout << r << endl;

	return 0;
}

