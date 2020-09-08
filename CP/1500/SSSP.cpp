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


const int mxn = 1234;
vi g[mxn];
int d[mxn];
vector<bool> vis(mxn,false);
int a[mxn];

void dfs(int v, int lvl){
	if(vis[v]) return;
	vis[v] = true;
	d[v] = lvl;

	for(auto u : g[v]){
		dfs(u,lvl+1);
	}
}

int main(){
	NINJA;

	int n; cin >> n;
	fo(i,n-1){
		int f,s; cin >>f >> s;
		--f,--s;
		g[f].pb(s);
		g[s].pb(f);
	}

	dfs(0,0);

	int q; cin >> q;

	int mn = INT_MAX;
	int ans = -1;
	fo(i,q){
		int x; cin >> x;
		--x;
		if(mn>d[x]){
			mn = d[x];
			ans = x;
		}
	}

	cout << ans + 1 << endl;


	

	return 0;
}