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

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

const int mxn = 505;
char mat[mxn][mxn];
bool vis[mxn][mxn];
int k;
int n,m;
char ans[mxn][mxn];

void dfs(int x, int y){
	if(k==0 || x < 0 || y < 0 || x >= n || y >= m) return;
	if(vis[x][y]) return ;
	if(mat[x][y]=='#') return;
	vis[x][y] = 1;
	ans[x][y] = '.';
	k--;
	fo(i,4){
		dfs(x+dx[i],y+dy[i]);
	}
}

int32_t main(){
	NINJA;

	cin >> n >> m >> k;
	int s = 0;
	fo(i,n){
		fo(j,m){
			cin >> mat[i][j];
			ans[i][j] = mat[i][j];
			if(mat[i][j]=='.'){
				s++;
				ans[i][j] = 'X';
			}
		}
	}

	k = s - k;
	fo(i,n){
		fo(j,m){
			if(mat[i][j]=='.') dfs(i,j);
		}
	}

	fo(i,n){
		fo(j,m){
			cout << ans[i][j];
		}
		cout << endl;
	}
	
	return 0;
}