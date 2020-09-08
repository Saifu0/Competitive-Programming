#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

const int mxn = 1001;
string mat[mxn];
int r,c;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int cnt =0;
bool vis[mxn][mxn];
int ma = 0;
int a,b;

void dfs(int x, int y){
	vis[x][y] = true;
	cnt++;
	if(cnt>ma){
		a = x;
		b = y;
		ma = cnt;
	}


	fo(i,4){
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx<0 || nx>=r || ny<0 || ny>=c || mat[nx][ny]=='#' || vis[nx][ny]) continue;
		dfs(nx,ny); 
	}
	vis[x][y] = false;

	cnt--;

}

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> r >> c;
		fo(i,r) cin >> mat[i];

		fo(i,r)
			fo(j,c) vis[i][j] = false;

		int ans = 0;

		cnt=0,ma=0;
		fo(i,r){
			fo(j,c){
				if( mat[i][j]=='.'){
					dfs(i,j);
					break;
				}
			}
		}

		cnt = 0, ma = 0;
		dfs(a,b);

		printf("Maximum rope length is %d.\n",ma-1);
	}

	return 0;
} 