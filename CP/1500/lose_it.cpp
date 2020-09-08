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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

int dp[6];

int32_t main(){
	NINJA;

	int n; cin >> n;

	vi a(n);

	fo(i,n) cin >> a[i];

	fo(i,n){
		if(a[i]==4) dp[0]++;
		else if(a[i]==8) dp[1] = min(dp[0],dp[1]+1);
		else if(a[i]==15) dp[2] = min(dp[1],dp[2]+1);
		else if(a[i]==16) dp[3] = min(dp[2],dp[3]+1);
		else if(a[i]==23) dp[4] = min(dp[3],dp[4]+1);
		else dp[5] = min(dp[4],dp[5]+1);
	}

	cout << n - dp[5]*6 << endl;
	
	return 0;
}