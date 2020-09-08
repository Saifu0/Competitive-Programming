#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 1e7+500;
int dp[2][mxn];


int32_t main(){
	NINJA;
		
	int n; cin >> n;
	
	dp[1][0] = 1;
	
	for(int step=1;step<=n;step++){
		dp[1][step] = 3LL*dp[0][step-1]%mod;
		dp[0][step] = (2LL*dp[0][step-1] + dp[1][step-1])%mod;
	}
	
	cout << dp[1][n] << endl;

	return 0;
}

