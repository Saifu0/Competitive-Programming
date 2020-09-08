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

const int mxn = 1e5+50;
vi g[mxn];
int n,m;
bool vis[mxn];
vi store;

void bfs(int s){
	priority_queue<int, vector<int>, greater<int> > q;
	q.push(s);
	vis[s] =1 ;

	while(!q.empty()){
		int u = q.top();
		q.pop();

		store.pb(u);

		for(auto v : g[u]){
			if(!vis[v]){
				q.push(v);
				vis[v] = 1;
			}
		}
	}
}

int32_t main(){
	NINJA;

	cin >> n >> m;

	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		g[s].pb(f);
	}

	bfs(1);

	

	for(int i : store) cout << i << " ";
	
	return 0;
}