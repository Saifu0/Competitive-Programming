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

const int mxn = 123;
char mat[mxn][mxn];
bool vis[mxn][mxn];
int n,m;
char c;

int32_t main(){
	NINJA;

	cin >> n >> m >> c;
	fo(i,n) fo(j,m) cin >> mat[i][j];

	int cnt =0 ;
	fo(i,n){
		fo(j,m){
			if(mat[i][j]==c && !vis[i][j]){
				vis[i][j] = 1;
				if(mat[i][j-1]!=c && !vis[i][j]) vis[i][j] = 1, cnt++;
				if(mat[i-1][j]!=c && !vis[i][j]) vis[i][j] =1,cnt++;
				if(mat[i+1][j]!=c && !vis[i][j]) vis[i][j] = 1, cnt++;
				if(mat[i][j+1]!=c && !vis[i][j]) vis[i][j] =1 , cnt++;
			}
		}
	}

	cout << cnt << endl;
	
	return 0;
} 