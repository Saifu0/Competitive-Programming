#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 1e5+500;
int a[mxn],b[mxn];
int dp[mxn][2];

int solve(int i, int tog, int n){
	if(i>=n) return 0;
	
	if(dp[i][tog]!=-1) return dp[i][tog];
	
	int ans = 0;
	if(tog)
		ans += max(a[i] + solve(i+1,tog^1,n) , solve(i+1,tog,n));
	else
		ans += max(b[i]+solve(i+1,tog^1,n), solve(i+1,tog,n));
		
	dp[i][tog] = ans;
		
	return ans;
}


int32_t main(){
	NINJA;
	
	int n; cin >> n;
	fo(i,n) cin >> a[i];
	fo(i,n) cin >> b[i];
	
	fo(i,n+1) fo(j,2) dp[i][j] = -1;
	
	cout << max(solve(0,1,n), solve(0,0,n)) << endl;
	

	return 0;
}

