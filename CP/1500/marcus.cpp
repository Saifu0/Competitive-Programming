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

string f = "IEHOVA#";
string g[10];
bool vis[10][10];
int n,m;
vi ans;
int dx[] = {-1,0,0};
int dy[] = {0,-1,1};

void dfs(int x, int y, int i){
	vis[x][y] = 1;
	// if(f[i]=='#' || g[x][y]=='#'){
	// 	return;
	// }

	fo(j,3){
		int nx = x + dx[j];
		int ny = y + dy[j];

		if(nx >= 0 && nx < n && ny >=0 && ny < m && !vis[nx][ny] && g[nx][ny]==f[i]){
			if(ny > y && nx==x) ans.pb(0ll);
			else if(ny < y && x==nx) ans.pb(1ll);
			else if(nx < x && y==ny) ans.pb(3ll);
			dfs(nx,ny,i+1);
		}
	}
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		ans.clear();
		memset(vis,false,sizeof(vis));
		cin >> n >> m;
		fo(i,n) cin >> g[i];

		fo(i,m){
			if(g[n-1][i]=='@'){
				dfs(n-1,i,0);
				break;
			}
		}

		// cout << sz(ans) << endl;
		int n = sz(ans);
		fo(j,sz(ans)){
			int i = ans[j];
			if(i==0) cout << "right" << (j!=n-1 ? " " : endl );
			else if(i==1) cout << "left" << (j!=n-1 ? " " : endl );
			else cout << "forth" << (j!=n-1 ? " " : endl );
		}
	}
	
	return 0;
}

// 2 
// 6 5
// PST#T
// BTJAS
// TYCVM
// YEHOF
// XIBKU
// N@RJB
// 5 4
// JA#X
// JVBN
// XOHD
// DQEM
// T@IY