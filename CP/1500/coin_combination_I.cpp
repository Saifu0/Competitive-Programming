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

const int mxn = 1e6+500;
ll dp[mxn];


int main(){
	NINJA;

	ll n,x; cin >> n >> x;

	vi coins(n);
	fo(i,n) cin >> coins[i];

	dp[0] = 1;

	for(int i=1;i<=x;i++){
		for(auto c : coins){
			if(i-c >= 0) dp[i] = (dp[i] + dp[i-c])%mod;
		}
	}

	cout << dp[x] << endl;	

	return 0;
}