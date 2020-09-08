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

const int mxn = 5e5+10;
int dp[mxn];

int32_t main(){
	NINJA;

	dp[1] = 0;
	int j = 1;
	for(int i=3;i<mxn;i+=2){
		dp[i] = j*8;
		j++;
	}

	j = 1;
	for(int i=3;i<mxn;i+=2) dp[i] = j*dp[i] + dp[i-2], j++;;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << dp[n] << endl;
	}
	
	return 0;
}