// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

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

const int mxn = 3010;
ld a[mxn];
int n;
ld dp[mxn][mxn];
// map<ld,ii> dp;

ld solve(int i, int tails, int heads, ld val){
	if((tails+heads==n) and heads > tails){
		return val*1.0;
	}
	if(i>=n) return 0.0;
	ld &ans  = dp[tails][heads];
	if(ans!=-1.0) return ans; 
	ans = 0.0;
	ans = solve(i+1,tails+1,heads,1.0*val*(1-a[i])) + solve(i+1,tails,heads+1,1.0*val*a[i]);
	// cout << val*(1-a[i]) << " " << val*a[i] << endl;
	cout << ans << endl;
	return ans;
}

int32_t main(){
	NINJA;
	// fo(i,mxn) fo(j,mxn) dp[i][j]=-1.0;
	cin >> n;
	fo(i,n) cin >> a[i];
	// cout << fixed << setprecision(12) << solve(0,0,0,1.0) << endl;
	dp[0][0] = 1-a[0];
	dp[0][1] = a[0];
	for1(i,n-1){
		fo(j,mxn){
			//tails
			dp[i][j] += (1-a[i])*dp[i-1][j];
			//heads
			if(j>0) dp[i][j] += (a[i]*dp[i-1][j-1]); 
		}
	}
	ld ans = 0;
	for(int i=n/2+1;i<mxn;i++){
		ans += dp[n-1][i];
	}
	cout << fixed << setprecision(12) << ans << endl;

	return 0;
}