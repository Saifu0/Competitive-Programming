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

const int mxn = 1e5+500;
int dp[mxn][3];
int a[mxn];

int32_t main(){
	NINJA;

	int n,p,q,r;
	cin >> n >> p >> q >> r;

	for(int i=1;i<=n;i++) cin >> a[i];

	dp[1][0] = p*a[1];
	for(int i=2;i<=n;i++){
		dp[i][0] = max(dp[i-1][0],p*a[i]);
	}
	dp[1][1] = dp[1][0] + q*a[1];
	for(int i=2;i<=n;i++)
		dp[i][1] = max(dp[i-1][1],dp[i][0] + q*a[i]);

	dp[1][2] = dp[1][1] + r*a[1];
	for(int i=2;i<=n;i++)
		dp[i][2] = max(dp[i-1][2],dp[i][1]+r*a[i]);

	cout << dp[n][2] << endl;
	
	return 0;
}