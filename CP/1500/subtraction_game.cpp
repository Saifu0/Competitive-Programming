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

const int mxn = 1e4+10;
int a[62];
int dp[62][mxn];


int solve(int idx, int num,int n){
	if(idx==n){
		if(num==1) return 1;
		else return 0;
	}

	int &ans = dp[idx][num];
	if(ans != -1) return ans;
	ans = 0;

	return ans = solve(idx+1,num,n) + solve(idx+1,__gcd(num,a[idx]),n);
}

int32_t main(){
	NINJA;
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		fo(i,n) cin >> a[i];

		fo(i,62) fo(j,mxn) dp[i][j] = -1;

		int cnt = 0;
		fo(i,n) cnt += solve(i+1,a[i],n);
		cout << cnt << endl;
	}

	
	return 0;
}