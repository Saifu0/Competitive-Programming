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

const int mxn = 1e6+50;
vi g[mxn];
int siz[mxn];
int color[mxn];
int c = 0;
int n,m; 

int dfs(int v){
	if(color[v]) return 0;
	color[v] = c;
	int ans = (v <= n) ? 1 : 0;

	for(auto u : g[v]){
		ans += dfs(u);
	}
	return ans;
}

int32_t main(){
	NINJA;

	cin >> n >> m;

	Fo(i,1,m+1){
		int k; cin >> k;
		Fo(j,1,k+1){
			int x; cin >> x;
			g[x].pb(i+n);
			g[i+n].pb(x);
		}
	}

	Fo(i,1,n+1){
		if(!color[i]){
			c++;
			siz[c] = dfs(i);
		}
		cout << siz[color[i]] << " ";
	}
	
	return 0;
}