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

const int mxn = 5010;
int a[mxn];
int n,m,k;
int dp[mxn][mxn];

int solve(int i, int cnt){
	if(dp[i][cnt]!= -1) return dp[i][cnt];

	if(i>(n-m) || cnt >= k) return 0;

	int ans1 = 0, ans2 = 0;

	Fo(j,i,i+m) ans1 += a[j];

	ans1 += solve(i+m,cnt+1);
	ans2 = solve(i+1,cnt);

	return dp[i][cnt] = max(ans1,ans2);
}


int32_t main(){
	NINJA;

	cin >> n >> m >> k;
	fo(i,n) cin >> a[i];
	fo(i,mxn) fo(j,mxn) dp[i][j] = -1;

	cout << solve(0,0) << endl;
	
	return 0;
}