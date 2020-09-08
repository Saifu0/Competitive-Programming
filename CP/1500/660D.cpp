// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 2e5+10;
int a[mxn],b[mxn];
vi g[mxn];
int dp[mxn];
bool vis[mxn];
int ans =0;

void dfs(int v){
	vis[v] = 1;
	dp[v] = a[v];
	for(int u:g[v]){
		if(!vis[u]){
			dfs(u);
		}
		if(dp[u]>0) dp[v] += dp[u];
	}
	if(v) ans += dp[v];
}

queue<int> q;
vi order;

void dfs2(int v){
	vis[v] =1;
	for(int u:g[v]){
		if(dp[u]>0) dfs(u);
		else q.push(u);
	}
	if(v) order.pb(v);
}

int32_t main(){
	NINJA;

	int n; cin >> n;
	for1(i,n) cin >> a[i];
	for1(i,n){
		cin >> b[i];
		if(b[i]==-1)b[i] = 0;
		g[b[i]].pb(i); 
	}
	dfs(0);
	memset(vis,false,sizeof(vis));
	cout << ans << endl;
	q.push(0);
	while(!q.empty()){
		int t = q.front();
		q.pop();
		dfs2(t);
	}
	for(int each : order) cout << each << " ";
	cout << endl;

	return 0;
}