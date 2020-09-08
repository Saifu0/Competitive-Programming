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

const int mxn = 1e6+50;
int dp[mxn];

// int solve(int i,int n){
// 	if(i>n) return 0;

// 	if(i==n) return 1;

// 	int ans = solve(i+2,n) + solve(i+3,n);
// 	return ans;
// }

int32_t main(){
	NINJA;

	dp[2] = 1;
    dp[3] = 1;
    for(int i = 4; i < mxn; ++i)
    {
        dp[i] = (dp[i - 2] % mod + dp[i - 3] % mod) % mod;
    }

	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		cout << dp[n] << endl;
	}
	
	return 0;
}