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

template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}

const int mxn = 205;
int dp[mxn][6005];
int p2[mxn];
int p5[mxn];
int n,k;

int32_t main(){
	NINJA;

	cin >> n >> k;
	fo(i,n){
		int x; cin >> x;
		while(x%2==0){
			p2[i]++;
			x/=2;
		}
		while(x%5==0){
			p5[i]++;
			x/=5;
		}
	}
	fo(i,mxn) fo(j,6005) dp[i][j] = -1;
	dp[0][0] = 0;
	fo(i,n){
		for(int j=k-1;j>=0;j--){
			for(int z=5700;z>=0;z--){
				if(dp[j][z]>=0) amax(dp[j+1][z+p5[i]],dp[j][z]+p2[i]);
			}
		}
	}
	int ans = 0;
	fo(i,5701) amax(ans,min(i,dp[k][i]));
	cout << ans << endl;
	
	return 0;
}