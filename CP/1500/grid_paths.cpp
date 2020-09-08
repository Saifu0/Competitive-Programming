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
string a[mxn];
ll n; 
ll dp[mxn][mxn];

ll solve(int x, int y){
	if(x==n-1 && y==n-1) return 1;
	if(x>n || y > n || x<0 || y <0) return 0;

	if(dp[x][y]!=-1) return dp[x][y]%mod;

	ll ans = 0;
	if(a[x][y]=='.'){
		ans = (ans+solve(x+1,y) + solve(x,y+1))%mod;
	}
	dp[x][y] = ans%mod;
	return ans%mod;
}

int main(){
	NINJA;

	cin >> n;
	fo(i,n) cin >> a[i];

	fo(i,n) fo(j,n) dp[i][j] = -1;

	if(a[n-1][n-1]=='*'){
		cout << 0 << endl;
		return 0;
	}

	cout << solve(0,0) << endl;

	return 0;
}