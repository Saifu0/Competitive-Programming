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

const int mxn = 310;
int a[mxn][mxn];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int n,m;
bool vis[mxn][mxn];

bool dfs(int x, int y, int m){
	if(x==n-1 && y==n-1) return 1;
	bool ok = 0;
	vis[x][y] = 1;
	fo(i,4){
		int nx = dx[i] + x;
		int ny = y + dy[i];
		if(nx >=0 && nx <n && ny >=0 && ny < m && !vis[nx][ny] && abs(a[x][y]-a[nx][ny]) <= m){
			ok = ok || dfs(nx,ny,m);
		}
	}
	return ok;
}

int32_t main(){
	NINJA;

	cin >> n >> m;
	fo(i,n) fo(j,m) cin >> a[i][j];

	int l=0,r=1e6-1;

	int ans = inf;

	while(l<=r){
		int m = (l+r)/2;
		memset(vis,false,sizeof(vis));
		if(dfs(0,0,m)){
			ans = m;
			r = m-1;
		}else{
			l = m+1;
		}
	}

	cout << ans << endl;
	
	return 0;
}