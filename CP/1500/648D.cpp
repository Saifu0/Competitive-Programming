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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

int vis[55][55], wall[55][55];
int n,m;
string mat[55];

void dfs(int x, int y){
	if(wall[x][y] || vis[x][y]) return;
	vis[x][y] =1;
	if(x<n-1) dfs(x+1,y);
	if(x>0) dfs(x-1,y);
	if(y<m-1) dfs(x,y+1);
	if(y>0) dfs(x,y-1);
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		memset(vis,0,sizeof(vis));
		memset(wall,0,sizeof(vis));

		fo(i,n) cin >> mat[i];

		fo(i,n){
			fo(j,m){
				if(!wall[i][j]) wall[i][j] = (mat[i][j]=='#' || mat[i][j]=='B' ) ? 1 : 0;
				if(mat[i][j]=='B'){
					if(i<n-1) wall[i+1][j] = 1;
					if(i>0) wall[i-1][j] = 1;
					if(j<m-1) wall[i][j+1] =1;
					if(j>0) wall[i][j-1] = 1;
				} 
			}
		}

		dfs(n-1,m-1);

		bool ok = true;

		fo(i,n){
			fo(j,m){
				if(mat[i][j]=='G' && !vis[i][j]){
					ok = false;
					break;
				}
			}
			if(!ok) break;
		}
		if(ok) cout << "Yes" << endl;
		else cout << "No" <<endl;
	}
	
	return 0;
}