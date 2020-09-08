#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 5123;
ll dp[mxn][mxn];
string s,r;

// int solve(int n, int m){
// 	//if(i>n || i<0 || j>m || j<0) return INT_MAX;

// 	if(n==0) return m;
// 	if(m==0) return n;

// 	int ans = 0;
// 	if(s[n-1]!=r[m-1]){
// 		ans = 1 + min({(n-1,m),solve(n,m-1),solve(n-1,m-1)});
// 	}else{
// 		return solve(n-1,m-1);
// 	}

// 	return ans;
// }

int main(){
	NINJA;

	cin >> s >> r;

	int n = sz(s);
	int m = sz(r);

	//cout << solve(n,m) << endl;

//	fo(i,n+1) fo(j,m+1) dp[i][j] = INT_MAX;

	//dp[0][0] = 0;

	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0) dp[i][j] = j;
			else if(j==0) dp[i][j] = i;
			else if(s[i-1]==r[j-1]) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = 1+ min({dp[i-1][j],dp[i][j-1], dp[i-1][j-1]});
		}
	}

	cout << dp[n][m] << endl;



	return 0;
}