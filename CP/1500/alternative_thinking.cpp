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

const int mxn = 1e5+10;
int dp[mxn];
int n; 

int solve(string s, int tog){
	memset(dp,0,sizeof(dp)); 
	for1(i,n){
		dp[i] += dp[i-1];
		if(s[i-1]=='0' && tog==0){
			dp[i] += 1;
			tog = 1-tog;
		}
		if(s[i-1]=='1' && tog==1){
			dp[i] += 1;
			tog = 1-tog;
		}
	}
	return dp[n];
}

int32_t main(){
	NINJA;

	string s;
	cin >> n >> s;

	int ans1 =max(solve(s,0),solve(s,1));
	cout << min(n,ans1+2) << endl;

	
	return 0;
}