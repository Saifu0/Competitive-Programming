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

int32_t main(){
	NINJA;

	int n; cin >> n;

	dp[0]=1;
	dp[1]=0;
	dp[2]=1;

	for(int i=3;i<=n;i++)
		dp[i] = ((i-1)*(dp[i-2]+dp[i-1]))%mod;

	cout << dp[n] << endl;
	
	return 0;
}