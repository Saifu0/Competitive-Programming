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

const int mxn = 1e4+10;
int a[mxn];
int n,k;
int dp[mxn][25][25];

int solve(int l, int k1, int k2){
	int r = n-l-1-k1+k2;
	if(l>=r) return 0;

	int &ans = dp[l][k1][k2];
	if(ans!=-1) return ans;
	if(k1+k2>k) return 30;

	ans = 0;
	if(a[l]==a[r]) return ans = solve(l+1,k1,k2);
	else{
		return ans = 1 + min(solve(l+1,k1,k2+1),solve(l,k1+1,k2));
	}

	// Breturn ans;
}

int32_t main(){
	
	NINJA;

	int _; cin >> _;
	int start = 1;
	while(_--){
		cin >> n >> k;
		fo(i,n) cin >> a[i];
		memset(dp,-1,sizeof(dp));

		int ans = solve(0,0,0);
		// cout << ans << endl;
		cout << "Case " << start++ << ": ";
		if(ans == 0){
			cout << "Too easy" << endl;
		}else if(ans <= k){
			cout << ans << endl;
		}else{
			cout << "Too difficult" << endl;
		}
	}

	return 0;
}