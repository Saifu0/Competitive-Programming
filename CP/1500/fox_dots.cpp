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

const int mxn = 51;
bool vis[mxn][mxn];
string a[mxn];
bool cycle = false;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int n,m;

void dfs(int x, int y, int fx, int fy, char ch){
	if(x<0||x>=n||y<0||y>=m) return;
	if(a[x][y]!=ch) return;
	if(vis[x][y]){ cycle = true; return; }
	vis[x][y] = true;

	fo(i,4){
		int px = x+dx[i];
		int py = y+dy[i];
		if(px==fx && py==fy) continue;
		dfs(px,py,x,y,ch);
	}
}


int main(){
	NINJA;
	cin >> n >> m;
	fo(i,n) cin >> a[i];
   
	fo(i,n){
		fo(j,m){
			if(!vis[i][j]) dfs(i,j,-1,-1,a[i][j]);
		}
	}

	if(cycle) cout << "Yes" <<endl;
	else cout << "No" << endl;
	return 0;
}