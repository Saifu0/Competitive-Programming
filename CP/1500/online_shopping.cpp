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

const int mxn = 1e5+10;
vector<vector<int>> shop;
vector<vector<int>> discount;
// vector<vector<int>> dp;
int n,m;

int solve(int i, int prev, int **dp){
	if(i >= n) return 0;

	if(dp[i][prev]!=-1) return dp[i][prev];

	int ans = inf;

	fo(idx,m){
		ans = min(ans,shop[i][idx] + (prev == idx ? - discount[i-1][idx] : 0) + solve(i+1,idx,dp));
	}
	return dp[i][prev] = ans;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		shop.clear();
		discount.clear();
		// dp.clear();
		shop.resize(n);
		discount.resize(n);
		// dp.resize(n+10);
		fo(i,n) shop[i].resize(m), discount[i].resize(m);
		// fo(i,n+10) dp[i].resize(m+10,-1);
		// int dp[n+1][m+1];
		// fo(i,n+1){
		// 	fo(j,m+1){
		// 		dp[i][j] = -1;
		// 	}
		// }

		int **dp = new int*[n+1];
		fo(i,n){
			dp[i] = new int[m+1];
			fo(j,m){
				dp[i][j] = -1;
			} 
		}

		fo(i,n){
			fo(j,m){
				// cout << dp[i][j] << " ";
				cin >> shop[i][j];
			}
			// cout << endl;
		}

		fo(i,n){
			fo(j,m){
				cin >> discount[i][j];
			}
		}

		int mn = inf;
		fo(i,m) mn = min(shop[0][i],mn);

		Fo(i,1,n){
			int prev = mn;
			mn = inf;
			fo(j,m){
				shop[i][j] = min(shop[i-1][j] + max(0ll,shop[i][j]-discount[i-1][j]),shop[i][j]+prev);
				mn = min(mn,shop[i][j]);
			}
		}

		cout << mn << endl;

		// cout << solve(0,-1,dp) << endl;
	}
	
	return 0;
}