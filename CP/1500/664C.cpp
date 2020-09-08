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

const int mxn = 210;
int a[mxn],b[mxn];
int n,m;
int v;
int dp[mxn][10001];

// int solve(int i, int j){
// 	if(i>=m) return inf;
// 	if(j>=n) return 0;
// 	if(i<0) return inf;
// 	int &ans = dp[i][j];
// 	if(ans!=-1) return ans;
// 	ans = inf;
// 	ans = min({(a[j]&b[i])|solve(i+1,j+1),ans,(a[j]&b[i])|solve(i,j+1),solve(i+1,j),solve(i-1,j),(a[j]&b[i])|solve(i-1,j+1)});
	
// 	return ans;
// }

// int check(int x){
// 	cout << x << endl;
// 	fo(i,n){
// 		fo(j,m){
// 			if(((a[i]&b[j])|x)==x) goto Next;

// 		}
// 			return 0;
// 			Next:;
// 	}
// 	return 1;
// }

int cache(int i, int val){
	if(i==n){
		return val;
	}
	if(dp[i][val]!=-1) return dp[i][val];

	int ans = inf;
	fo(j,m){
		ans =min(ans,cache(i+1,(val|(a[i]&b[j]))));
	}
	return dp[i][val] = ans;
}

int32_t main(){
	NINJA;
	fo(i,mxn) fo(j,10001) dp[i][j] = -1;
	cin >> n >> m;
	fo(i,n) cin >> a[i];
	// sort(a,a+n);
	fo(i,m) cin >> b[i];
	// sort(b,b+m);
	// cout << solve(0,0) << endl;

	// int ans = (1ll<<9)-1;
	// for(int i=8;i>=0;i--){
	// 	check(ans^(1ll<<i)) ? ans^=(1ll<<i) : 0;
	// }
	// cout << ans << endl;
	cout << cache(0,0) << endl;
	
	return 0;
}