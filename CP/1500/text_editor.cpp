#include<bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define Pair pair<int,pair<int,int>> 

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	  freopen("input.txt", "rt", stdin);
	  freopen("output.txt", "wt", stdout);
	}

const int mxn = 1e5+10;
int a[105][mxn];
int sr,sc,dr,dc;
int n;
int b[mxn];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int m;
int qx[11000000],qy[11000000];

// int bfs(){

// 	priority_queue<Pair,vector<Pair>,greater<Pair> > q;
// 	q.push({0,{sr,sc}});
// 	vis[sr][sc];

// 	while(!q.empty()){
// 		int d = q.top().F;
// 		int x = q.top().S.F, y = q.top().S.S;
// 		q.pop();
// 		if(x==dr&&y==dc){
// 			if(a[sr][sc]=='o') d--;
// 			return d;
// 		}
// 		fo(i,4){
// 			int nx = x + dx[i];
// 			int ny = y + dy[i];
// 			if(a[nx][ny]=='o' && nx >= 1 && nx <= n && ny >= 1&& ny<=m){
// 				while(a[nx][ny]!='x' && ny>=1){
// 					ny--;
// 				}
// 				ny++;
// 			}
// 			// cout << nx << " " << ny << endl;
// 			if(nx >= 1 && nx <= n && ny >= 1&& ny<=m && !vis[nx][ny]){
// 				vis[nx][ny] = 1;
// 				q.push({d+1,{nx,ny}});
// 			}
// 		}
// 	}
// }

int32_t main(){
	c_p_c();
	memset(a,-1,sizeof(a));
	cin >> n;
	for1(i,n) cin >> b[i];
	cin >> sr >> sc >> dr >> dc;

	a[sr][sc] = 0;
	int i = 0;
	qx[i] = sr;
	qy[i++] = sc;
	int j = 0;

	while(j<i){
		int x = qx[j];
		int y = qy[j++];
		if(x==dr && y==dc) break;

		fo(k,4){
			int nx = x + dx[k];
			int ny = y + dy[k];

			if(nx < 1 || ny < 1 || nx > n) continue;
			if(ny>b[nx]) ny = b[nx]+1;

			if(a[nx][ny]==-1){
				a[nx][ny] = a[x][y] + 1;
				qx[i] = nx;
				qy[i++] = ny;
			}
		}
	}

	cout << a[dr][dc] << endl;

	return 0;
}