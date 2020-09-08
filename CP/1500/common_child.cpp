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

const int mxn = 5010;
string s1,s2;
int n,m;
int dp[mxn][mxn];

int solve(int i, int j){
	if(i>=n || j >= m) return 0;

	if(dp[i][j]!=-1) return dp[i][j];
	int ans = 0;

	if(s1[i]==s2[j]) ans = 1+ solve(i+1,j+1);
	else ans = max(solve(i+1,j),solve(i,j+1));

	return dp[i][j] = ans;
}

int32_t main(){
	NINJA;

	cin >> s1 >> s2;
	n = sz(s1);
	m = sz(s2);
	
	fo(i,mxn) fo(j,mxn) dp[i][j] = -1;

	cout << solve(0,0) << endl;

	return 0;
}