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

const int mxn = 105;
int dp[mxn][2][2];
int a[mxn];
int n;

int solve(int i, int sport, int contest){
	if(i>n) return 0;
	if(dp[i][sport][contest]!=-1) return dp[i][sport][contest];

	int ans;

	if(a[i]==0){
		ans = 1 + solve(i+1,0,0);
	} else if(a[i]==1){
		if(contest){
			ans = 1+ solve(i+1,0,0);
		}else{
			ans = min(1+solve(i+1,0,0),solve(i+1,0,1));
		}
	}else if(a[i]==2){
		if(sport){
			ans = 1+ solve(i+1,0,0);	
		}else{
			ans = min(1+solve(i+1,0,0),solve(i+1,1,0));
		}
	}else{
		if(sport){
			ans = min(1+solve(i+1,0,0),solve(i+1,0,1));
		}else if(contest){
			ans = min(1+solve(i+1,0,0),solve(i+1,1,0));
		}else{
			ans = min(solve(i+1,0,1),min(solve(i+1,1,0),1+solve(i+1,0,0)));
		}
	}
	dp[i][sport][contest] = ans;
	return dp[i][sport][contest];
}

int32_t main(){
	NINJA;

	cin >> n;
	for1(i,n) cin >> a[i];

	// fo(i,mxn) fo(j,2) fo(k,2) dp[i][j][k] = -1;
	memset(dp,-1,sizeof(dp));

	cout << solve(1,0,0) << endl;

	
	return 0;
}