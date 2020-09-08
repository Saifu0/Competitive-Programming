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
int dp[mxn][6][2];
int a[mxn];
int n,k,z;

int solve(int i,int left, int tog, int move){
	if(i>n || move > k) return 0;
	int&ans = dp[i][left][tog];
	if(ans!=-1) return ans;
	ans = 0;
	ans = solve(i+1,left,0,move+1) + a[i];
	if(tog==0 and left < z and i>1){
		ans = max(solve(i-1,left+1,1,move+1)+a[i],ans);
	}
	return ans;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> n >> k >> z;
		for(int i = 0; i <= n; i++)
			for(int j = 0; j <= 5; j++)
				for(int k = 0; k <= 1; k++)
					dp[i][j][k] = -1;
		for1(i,n) cin >> a[i];
		cout << solve(1,0,1,0) << endl;
	}
	
	return 0;
}