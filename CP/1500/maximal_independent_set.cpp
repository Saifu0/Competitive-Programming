#include<bits/stdc++.h>
using namespace std;

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

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

const int mxn = 10000+10;
vi g[mxn];
bool vis[mxn];
int ans[mxn];
int n,m;

void dfs(int v){
	vis[v]  =1;
	for(int u : g[v]){
		if(!vis[u]){
			dfs(u);
		}
	}
}

int main(){
	c_p_c();

	cin >> n >> m;
	fo(i,m){
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}

	int cnt =0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			cnt++;
			ans[i] = 1;
			dfs(i);
		}
		// if(i%5==0){
		// 	ans[i] = 1;
		// 	cnt++;
		// }
	}

	cout << cnt << endl;
	for(int i=1;i<=n;i++){
		cout << ans[i] << " ";
	}

	return 0;
}