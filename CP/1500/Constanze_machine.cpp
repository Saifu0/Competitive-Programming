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

const int mxn = 1e5+500;
int dp[mxn];

int32_t main(){
	NINJA;

	string s; cin >> s;
	int n = sz(s);

	fo(i,n){
		if(s[i]=='m' || s[i]=='w'){
			cout << 0 << endl;
			return 0;
		}
	}

	dp[0] = dp[1] = 1;

	for(int i=2;i<=n;i++){
		if(s[i-2]==s[i-1] && (s[i-2]=='u' || s[i-2]=='n')){
			dp[i] = (dp[i-1] + dp[i-2])%mod;
		}else{
			dp[i] = dp[i-1]%mod;
		}
	}

	cout << dp[n]%mod << endl;
	
	
	return 0;
}