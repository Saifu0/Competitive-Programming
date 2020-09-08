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

const int mxn = 1002;
string a[mxn];
bool vis[mxn][mxn];
int cost[mxn][mxn];
int n,m;
int dx[] = {-1,1,0,0,-1,1,-1,1};
int dy[] = {0,0,-1,1,-1,1,1,-1};
int sx,sy,ex,ey;

bool inside(int x, int y){
	return x>=0&&y>=0&&x<n&&y<m;
}

int bfs(){
	queue<pair<pair<int,int>,int>> q;
	q.push({{sx,sy},0});
	vis[sx][sy] = 1;
	cost[sx][sy] = 255;
	while(!q.empty()){
		int x = q.front().F.F;
		int y = q.front().F.S;
		int c = q.front().S;
		q.pop();
		if(x==ex && y==ey){
			return c;
		}

		fo(i,8){
			int j = 1, nx,ny;
			while(1){
				nx = x+dx[i]*j;
				ny = y+dy[i]*j++;
				if(inside(nx,ny)&&a[nx][ny]!='X'&&!(cost[nx][ny]&(1ll<<i))){
					if(!done[nx][ny]){
						
					}
				}
			}
		}

		// if(!vis[x-1][y])
		// for(int i=x-1;i>=0;i--){
		// 	if(a[i][y]=='X') break;
		// 	if(!vis[i][y]){
		// 		vis[i][y] = 1;
		// 		q.push({{i,y},c+1});
		// 	}
		// }
		// if(!vis[x+1][y])
		// for(int i=x+1;i<n;i++){
		// 	if(a[i][y]=='X') break;
		// 	if(!vis[i][y]){
		// 		vis[i][y] = 1;
		// 		q.push({{i,y},c+1});
		// 	}
		// }
		// if(!vis[x][y-1])
		// for(int i=y-1;i>=0;i--){
		// 	if(a[x][i]=='X') break;
		// 	if(!vis[x][i]){
		// 		vis[x][i] = 1;
		// 		q.push({{x,i},c+1});
		// 	}
		// }
		// if(!vis[x][y+1])
		// for(int i=y+1;i<m;i++){
		// 	if(a[x][i]=='X') break;
		// 	if(!vis[x][i]){
		// 		vis[x][i] = 1;
		// 		q.push({{x,i},c+1});
		// 	}
		// }
		// if(!vis[x-1][y-1])
		// for(int i=x-1,j=y-1;i>=0&&j>=0;i--,j--){
		// 	if(a[i][j]=='X') break;
		// 	if(!vis[i][j]){
		// 		vis[i][j] =1;
		// 		q.push({{i,j},c+1});
		// 	}
		// }
		// if(!vis[x+1][y+1])
		// for(int i=x+1,j=y+1;i<n&&j<m;i++,j++){
		// 	if(a[i][j]=='X') break;
		// 	if(!vis[i][j]){
		// 		vis[i][j] =1;
		// 		q.push({{i,j},c+1});
		// 	}
		// }
		// if(!vis[x-1][y+1])
		// for(int i=x-1,j=y+1;i>=0&&j<m;i--,j++){
		// 	if(a[i][j]=='X') break;
		// 	if(!vis[i][j]){
		// 		vis[i][j] =1;
		// 		q.push({{i,j},c+1});
		// 	}
		// }
		// if(!vis[x+1][y-1])
		// for(int i=x+1,j=y-1;i<n&&j>=0;i++,j--){
		// 	if(a[i][j]=='X') break;
		// 	if(!vis[i][j]){
		// 		vis[i][j] =1;
		// 		q.push({{i,j},c+1});
		// 	}
		// }
	}
	return -1;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		memset(vis,false,sizeof(vis));
		cin >> n >> m;
		fo(i,n) cin >> a[i];
		fo(i,n){
			fo(j,m){
				if(a[i][j]=='S') sx = i, sy = j;
				if(a[i][j]=='F') ex = i, ey = j;
			}
		}

		cout << bfs() << endl;
	}
	
	return 0;
}