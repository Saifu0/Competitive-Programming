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

const int mxn = 123;
int a[mxn];
int dp[mxn][mxn];

int sum(int l, int r){
	int ans = 0;
	for(int i=l;i<=r;i++){
		ans += a[i];
		ans%=100;
	}
	return ans;
}

int solve(int l, int r){
	if(l>=r) return 0;

	if(dp[l][r]!=-1) return dp[l][r];

	dp[l][r] = INT_MAX;
	for(int i=l;i<=r;i++){
		dp[l][r] = min(dp[l][r],solve(l,i)+solve(i+1,r)+sum(l,i)*sum(i+1,r));
	}
	return dp[l][r];
}

int main(){
	NINJA;

	int n;
	while(cin>>n){
		//int n; cin >> n;
		fo(i,n) cin >> a[i];

		fo(i,mxn) fo(j,mxn) dp[i][j] = -1;

		cout << solve(0,n-1) << endl;
	}
	return 0;
}