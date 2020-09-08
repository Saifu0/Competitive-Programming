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
int a[mxn];
int dp[mxn];



int solve(int n){
	memset(dp,INT_MAX,sizeof dp);

	dp[0] = 0;
	dp[1] = abs(a[0]-a[1]);

	for(int i=2;i<n;i++){
		dp[i] = min(dp[i-1] + abs(a[i-1]-a[i]), dp[i-2] + abs(a[i-2]-a[i]));
	}

	return dp[n-1];

}

int main(){
	NINJA;

	int n; cin >> n;
	fo(i,n) cin >> a[i];

	//memset(dp,-1,sizeof dp);
	cout << solve(n) << endl;

	return 0;
}