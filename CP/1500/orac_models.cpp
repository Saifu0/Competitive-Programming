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

const int mxn = 1e5+50;
int dp[mxn];
int a[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		fo(i,n) cin >> a[i+1];

		//dp[1] = 1;

		for(int i=1;i<=n;i++) dp[i] = 1;
		dp[0] = 0;

		for(int i=1;i<=n;i++){
			for(int j=2*i;j<=n;j+=i){
				if(a[i]<a[j]) dp[j] = max(dp[j],dp[i]+1);
			}
		}

		for(int i=1;i<=n;i++) dp[0] = max(dp[0],dp[i]);
		cout << dp[0] << endl;
	}
	
	return 0;
}