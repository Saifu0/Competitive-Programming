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

const int mxn = 1e4+5;
int a[mxn];
bool ok;
int dp[mxn][110];


int solve(int i, int val, int n, int k){
	if(i==n+1){
		if(val == 0) return 1;
		else return 0;
	}

	// if(dp[i][val]!=-1) return dp[i][val];

	int &ans = dp[i][val];

	if(ans!=-1) return ans;

	ans = solve(i+1,((val+a[i])%k+k)%k,n,k);
	ans |= solve(i+1,((val-a[i])%k+k)%k,n,k);
	return ans;

}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		for1(i,n) cin >> a[i];
		// memset(dp,-1,sizeof(dp));
		fo(i,mxn) fo(j,110) dp[i][j] = -1;

		if(solve(2,(a[1]%k + k)%k,n,k)) cout << "Divisible" << endl;
		else cout << "Not divisible" << endl;
	}
	
	return 0;
}