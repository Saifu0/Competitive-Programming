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
vi g[mxn+20];
float d[mxn+20];
//bool vis[mxn+20];

void bfs(int src){
	set<pair<float,int>> q;
	q.insert({0,0});
		
	d[src] = 0 ;
	//vis[src] = 0;

	while(!q.empty()){
		int u = q.begin()->S;
		q.erase(q.begin());

		for(auto v : g[u]){
			float wt = 0.5;
			if(u < mxn && v < mxn) wt = 1;
			if(d[u] + wt < d[v]){
				q.erase({d[v],v});
				d[v] = d[u] + wt;
				q.insert({d[v],v});
			}
		}
	} 
}


int32_t main(){
	NINJA;

	fo(i,mxn+10) d[i] = inf;

	string s; cin >> s;
	int n = sz(s);

	fo(i,n){
		int idx = s[i] - '0';
		g[i].pb(idx+mxn);
		g[idx+mxn].pb(i);
		if(i<(n-1)){
			g[i].pb(i+1);
			g[i+1].pb(i);
		}
	}

	bfs(0);

	fo(i,n) cout << d[i] << " ";
	cout << endl;

	cout << d[n-1] << endl;
	
	return 0;
} 