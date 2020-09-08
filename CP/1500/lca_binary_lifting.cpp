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


const int mxn = 11;
int lca[1001][mxn];
vi g[1001];
int lvl[1001];

void dfs(int v, int par, int l){
	lca[v][0] = par;
	lvl[v] = l;

	for(auto u : g[v]){
		if(u!=par) 
		dfs(u,v,l+1);
	}
}

int getlca(int a, int b){
	if(lvl[a] > lvl[b]) swap(a,b);

	int d = lvl[b] - lvl[a];

	while(d>0){
		int i = log2(d);
		b = lca[b][i];
		d -= (1<<i);
	}

	if(a==b) return a;

	for(int i=mxn;i>=0;i--){
		if(lca[a][i] != -1 && (lca[a][i] != lca[b][i]))
			a = lca[a][i] , b = lca[b][i];
	}

	return lca[a][0];
}

int getDist(int a , int b)
{
	int lca = getlca(a , b);
	return lvl[a] + lvl[b] - 2*lvl[lca];
}

int main(){
	NINJA;

	int n; cin >> n;

	for(int i=1;i<=n;i++){
		for(int j=0;j<=mxn;j++) lca[i][j] = -1;
	}

	fo(i,n-1){
		int f,s; cin >> f >> s;
		f,s;
		g[f].pb(s);
		g[s].pb(f);
	}

	dfs(1,-1,0);
	for(int i=1;i<=mxn;i++){
		for(int j=1;j<=n;j++){
			if(lca[j][i-1]!=-1){
				int p = lca[j][i-1];
				lca[j][i] = lca[p][i-1];
			}
		}
	}

	int q; cin >> q;
	while(q--){
		int a,b; cin >> a >> b;

		cout << getDist(a,b) << endl;
	}

	return 0;
}