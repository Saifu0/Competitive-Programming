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

int n,a,b,c;

const int mxn = 4005;
int dp[mxn][mxn];

int solve(int i, int j){
	if(i==n) return j;
	if(i>n) return 0;

	if(dp[i][j]!=-1) return dp[i][j];

	return dp[i][j] =max({solve(i+a,j+1),solve(i+b,j+1),solve(i+c,j+1)});
}

int32_t main(){
	NINJA;

	cin >> n >> a >> b >> c;

	fo(i,mxn) fo(j,mxn) dp[i][j] = -1;

	cout << solve(0,0) << endl;
	
	return 0;
}