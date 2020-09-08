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

const int mxn = 200005;

vi g[mxn];
int depth[mxn];
int szz[mxn];
int det[mxn];

int dfs(int v, int par){
	depth[v] = depth[par] + 1;
	szz[v] = 1;

	for(int u : g[v]){
		if(u==par) continue;
		szz[v] += dfs(u,v);
	}
	det[v] = szz[v] - depth[v];
	return szz[v];
}

int main(){
	NINJA;

	int n,k; cin >> n >> k;
	fo(i,n-1){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		g[s].pb(f);
	}

	dfs(1,0);

	sort(det+1,det+n+1);

	ll sum = 0;
	for(int i=n;i>k;i--) sum += det[i];

	cout << sum << endl;

	return 0;
}