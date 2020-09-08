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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 30;
string mat[mxn];
bool vis[mxn][mxn];
int dx[] = {-1,-1,-1,0,1,1,1,0};
int dy[] = {-1,0,1,1,1,0,-1,-1};
int n;

void dfs(int x, int y){
	vis[x][y] = 1;

	fo(i,8){
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx <n && nx >=0 && ny <n && ny >= 0&& !vis[nx][ny] && mat[nx][ny]=='1') dfs(nx,ny);
	}

}


int32_t main(){
	NINJA;
	int c= 1;
	// int t; cin >> t;
	while(cin >> n){
		memset(vis,false,sizeof(vis));
		fo(i,n) cin >> mat[i];

		int cnt = 0;
		fo(i,n){
			fo(j,n){
				if(!vis[i][j] && mat[i][j]=='1'){
					dfs(i,j);
					cnt++;
				}
			}
		}
		cout << "Image number " << c++ << " contains " << cnt << " war eagles." << endl;
	}
	
	return 0;
}

// 2
// 6
// 100100
// 001010
// 000000
// 110000
// 111000
// 010100
// 8
// 01100101
// 01000001
// 00011000
// 00000010
// 11000011
// 10100010
// 10000001
// 01100000