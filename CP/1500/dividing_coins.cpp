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

int n; 
const int mxn = 110;
int a[mxn];
int need;
int dp[110][25000+5];

int solve(int i, int val){
	if(i >= n || val > need) return 0;

	if(dp[i][val]!=-1) return dp[i][val];

	int ans = 0;
	if(val + a[i] > need) return solve(i+1,val);
	else ans = max(a[i] + solve(i+1,val+a[i]), solve(i+1,val));
	return dp[i][val] = ans; 
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		fo(i,mxn) fo(j,25000+5) dp[i][j] = -1;
		int sum = 0;
		cin >> n;
		fo(i,n) cin >> a[i] , sum += a[i];
		need = (sum)/2;

		int rest = solve(0,0);
		cout << sum - 2*rest << endl;
	}
	
	return 0;
} 