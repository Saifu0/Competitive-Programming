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

const int mxn = 1234;
int g[mxn][mxn];
bool vis[mxn][mxn];
int n,m;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int cnt;

void dfs(int x, int y){
	vis[x][y] = true;
	cnt++;
	fo(i,4){
		int nx =x +  dx[i];
		int ny =y + dy[i];
		if(nx >= 0 && nx < n && ny >=0 && ny <m && !vis[nx][ny] && g[nx][ny]==g[x][y]) dfs(nx,ny);

	}
}

int32_t main(){
	NINJA;
	cin >> n >> m;
	fo(i,n) fo(j,m) cin >> g[i][j];

	int mn_el = inf, mx_el = -inf;

	fo(i,n){
		fo(j,m){
			if(!vis[i][j]){
				cnt=0;
				dfs(i,j);

				if((cnt > mx_el)){
					mx_el = cnt;
					mn_el = g[i][j];
				}else if(cnt==mx_el && mn_el > g[i][j]){
					mn_el = g[i][j];
				}
			}
		}
	}

	cout << mn_el << " " << mx_el << endl;

	return 0;
}