// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define deb(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#define memo(a,val) memset(a,val,sizeof(a))
#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin(),a.end()
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

const int mxn = 205;
int a[mxn];
int n,k,x;
bool ok ;
int dp[mxn][mxn][mxn];
int cache[mxn][mxn];

int solve(int i,int ck,int cx){
	if(ck>=k) return -inf;

	if(cx>x) return -inf;
	if(i==n){
		if(cx==x) return 0;
		return -inf;
	}

	int &ans = dp[i][ck][cx];
	if(ans!=-1) return ans;

	ans = max(solve(i+1,ck+1,cx),solve(i+1,0,cx+1)+a[i]);
	return ans;
}

int solve2(){
	memo(cache,-mod);
	cache[0][0] = 0;
	for(int cx=1;cx<=x;cx++){
		for(int i=1;i<=n;i++){
			for(int j=i-1;j>=0 and (i-j)<=k;j--){
				cache[cx][i] = max(cache[cx][i],cache[cx-1][j]+a[i-1]);
			}
		}
	}
	debug() << range(cache[x],cache[x]+n);
 	int ans = -1;
	for(int i=n-k+1;i<=n;i++) ans = max(ans,cache[x][i]);
	return ans;
}

int32_t main(){
	NINJA;

	cin >> n >> k >> x;
	fo(i,n) cin >> a[i];

	

	memo(dp,-1);

	// int ans = solve(0,0,0);
	// cout << (ans<0 ? -1 : ans) << endl;
	// else cout << ans << endl;

	cout << solve2() << endl;
	
	return 0;
}