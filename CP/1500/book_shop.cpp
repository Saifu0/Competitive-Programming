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

const int mxn = 1234;
ll h[mxn],w[mxn];
ll dp[100050];

int main(){
	NINJA;

	ll n,x; cin >> n >> x;
	fo(i,n) cin >> h[i];
	fo(i,n) cin >> w[i];

	// for(ll i=1;i<=n;i++){
	// 	for(ll j=1;j<=x;j++){
	// 		//if(i==0 || j==0) dp[i][j] = 0;
	// 		if(j>=h[i-1]){
	// 			dp[i][j] = max(dp[i-1][j],dp[i-1][j-h[i-1]]+w[i-1]);
	// 		}else{
	// 			dp[i][j] = dp[i-1][j];
	// 		}
	// 	}
	// }

	for(int i=0;i<n;i++){
		for(int j=x;j>=0;j--){
			if(j>=h[i]) dp[j] = max(dp[j],dp[j-h[i]]+w[i]);
		}
	}

	cout << dp[x] << endl;

	return 0;
} 