#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(ll i=0;i<n;i++)
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

const int mxn = 123;
ll w[mxn],val[mxn];
ll dp[mxn][100001];
ll n,W;

ll solve(){

	for(ll i=1;i<=n;i++){
		for(ll j=0;j<=W;j++){
			if(j>=w[i-1])
				dp[i][j] = max(dp[i-1][j], val[i-1] + dp[i-1][j-w[i-1]]);
			else 
				dp[i][j] = dp[i-1][j];
		}
	}

	return dp[n][W];
}

int main(){
	NINJA;
	cin >> n >> W;

	fo(i,n) cin >> w[i] >> val[i];

	cout << solve() << endl;

	return 0;
}