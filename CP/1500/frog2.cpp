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
int n,k;

int solve(){

	fo(i,n) dp[i]  = INT_MAX;
	dp[0] = 0;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=i+k;j++){
			if(j<n) dp[j] = min(dp[j],dp[i]+abs(a[i]-a[j]));
		}
	}

	return dp[n-1];
}

int main(){
	NINJA;

	cin >> n >> k;
	fo(i,n) cin >> a[i];

	cout << solve() << endl;

	return 0;
}