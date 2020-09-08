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

const int mxn = 462144+10;
int a[mxn];
int dp[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;
	for1(i,n) cin >> a[i];

	// dp[0] = a[0];
	// memset(dp,inf,sizeof(dp));
	fo(i,n+1) dp[i] = inf;
	dp[0] = 0;
	dp[1] = 0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<18;j++){
			dp[i+(1ll<<j)] = min(dp[i] + abs(a[i]-a[i+(1ll<<j)]),dp[i+(1ll<<j)]);
		}
	}

	// for1(i,n) cout << dp[i] << " ";

	cout << dp[n] << endl;
	
	return 0;
}