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

const int mxn = 102;
int dp[mxn][mxn],a[mxn][mxn];
int n,m;

int solve(int i, int j, int val){
	if(i==n-1 && j==m-1){
		if(a[i][j]<val) return inf;
		else return dp[i][j]  = a[i][j] - val;
	}

	if(i>=n || j>=m) return inf;

	if(a[i][j] < val) return inf;

	if(dp[i][j] != -1) return dp[i][j];

	int cost = a[i][j] - val;

	return dp[i][j] = cost + min(solve(i+1,j,val+1),solve(i,j+1,val+1));
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		fo(i,n) fo(j,m) cin >> a[i][j];

		int ans = inf;

		fo(k,n){
			fo(l,m){
				fo(i,n) fo(j,m) dp[i][j] = -1;
				int val = a[k][l] - (k+l);

				ans = min(ans,solve(0,0,val));
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}