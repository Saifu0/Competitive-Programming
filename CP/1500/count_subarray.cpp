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
int n;
int a[mxn];

int solve(){
	for(int i = 1;i<mxn;i++) dp[i] = 1;

	dp[0] = 0;
	int cnt = 1;
	for(int i=2;i<=n;i++){
		if(a[i]>=a[i-1]) dp[i] = 1+dp[i-1];
		cnt += dp[i];
	}

	return cnt;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> n;
		fo(i,n) cin >> a[i+1];

		cout << solve() << endl;
	}
	
	return 0;
} 