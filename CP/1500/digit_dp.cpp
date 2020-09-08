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

/* Program to calculate digit sum from L to R using dp with memoization.. */

const int mxn = 11;
int a[mxn];
int dp[11][101][2];
int n;

int solve(int i, int sum, int tog){
	if(i>=n) return sum;
	int&ans = dp[i][sum][tog];
	if(ans!=-1) return ans;

	int limit = 9;
	if(!tog) limit=a[i];

	ans = 0;

	fo(j,limit+1){
		if(tog or j<limit){
			ans += solve(i+1,sum+j,1);
		}else{
			ans += solve(i+1,sum+j,0);
		}
	}
	return ans;
}


int32_t main(){
	NINJA;

	while(1){
		string l,r; cin >> l >> r;
		if(l=="-1" and r=="-1") return 0;

		n = sz(r);
		fo(i,n) a[i]=r[i]-'0';

		memo(dp,-1);

		int ans1 = solve(0,0,0);

		debug() << deb(ans1);

		memo(dp,-1);

		n = sz(l);
		fo(i,n) a[i]=l[i]-'0';

		a[n-1]--;

		int ans2 = solve(0,0,0);

		cout << ans1-ans2 << endl;
	}
	
	return 0;
}