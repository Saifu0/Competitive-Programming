// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 1010;
int dp[mxn][mxn];
int pref[mxn][mxn];

int32_t main(){
	NINJA;
  // 	freopen("paintbarn.in", "rt", stdin);
 	// freopen("paintbarn.out", "wt", stdout);
	int n,m; cin >> n >> m;

	fo(i,n){
		int a,b,c,d; cin >> a >> b >> c >> d;
		dp[a][b]++;
		dp[c][b]--;
		dp[c][d]++;
		dp[a][d]--;
	}
	int cnt = 0;
	fo(i,mxn){
		fo(j,mxn){
			if(i) dp[i][j] += dp[i-1][j];
			if(j) dp[i][j] += dp[i][j-1];
			if(i&&j) dp[i][j] -= dp[i-1][j-1];
			if(dp[i][j]==m) cnt++;
		}
	}

	fo(i,10){
		fo(j,10){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	cout << cnt << endl;

	return 0;
}