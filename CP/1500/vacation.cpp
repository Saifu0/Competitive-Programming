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

const int mxn = 1e5+500;
int dp[mxn][3];


int main(){
	NINJA;
	int n; cin >> n;
	fo(i,n) fo(j,3) cin >> dp[i][j];

	for(int i=1;i<n;i++){
		
		dp[i][0] = max(dp[i-1][1] + dp[i][0], dp[i-1][2] + dp[i][0]);
		dp[i][1] = max(dp[i-1][0] + dp[i][1] , dp[i-1][2] + dp[i][1]);
		dp[i][2] = max(dp[i-1][1] + dp[i][2], dp[i-1][0] + dp[i][2]);
	}

	int ans = INT_MIN;

	fo(i,3){
		if(dp[n-1][i] > ans) ans = dp[n-1][i];
	}

	cout << ans << endl;

	return 0;
}