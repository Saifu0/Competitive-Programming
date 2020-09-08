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

int t,k;
int a,b;

const int mxn =1e5+1;

int dp[mxn];

// int solve(int x){
// 	if(x>=mxn) return 0;
// 	if(x==mx)
// 	if(dp[x]!=-1) return dp[x];

// 	int ans = 0;
// 	ans += solve(x+k);
// 	ans += solve(x+1);

// 	return dp[x] = ans;
// }

int32_t main(){
	NINJA;

	cin >> t >> k;


	fo(i,mxn) dp[i] = 0;
	
	dp[0] = 1;

	for(int i=1;i<mxn;i++){
		dp[i] = dp[i-1]%mod;;
		if(i>=k) dp[i] =(dp[i] + dp[i-k] +mod)%mod; ;
	}

	// for(int i=1;i<=5;i++) cout << dp[i] << " ";
	// cout << endl;

	dp[0] = 0;

	for(int i=1;i<mxn;i++) dp[i] = (dp[i]+dp[i-1]+mod)%mod;
	
	while(t--){
		cin >> a >> b;
		
		cout << (dp[b]-dp[a-1] + mod)%mod << endl;
	}
	
	return 0;
}