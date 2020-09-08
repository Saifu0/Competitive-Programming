// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
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

const int mxn = 2e5+10;
int a[mxn];
int n,k;
int dp[mxn][2];

int bin_search(int i){
	int l = i ,r =n;

	int id = i;

	while(l<=r){
		int m = (l+r)/2;
		if(a[i]+k>=a[m]){
			id = max(id,m);
			l = m+1;
		}else{
			r = m-1;
		}
	}

	return id-i+1;
}

int solve(int i, int c){
	if(c==2 or i==n+1) return 0;
	if(c>2 or i>n+1) return -1e9;

	int &ans = dp[i][c];

	if(ans!=-1) return dp[i][c];

	int cnt = bin_search(i);

	// debug() << deb(i) deb(cnt) deb(a[i]);

	ans = max(solve(i+1,c),cnt+solve(i+cnt,c+1));

	return ans;
}

int32_t main(){
	NINJA;
	
	int t; cin >> t;
	while(t--){

		memo(dp,-1);

		cin >> n >> k;

		int x;

		for1(i,n){
			cin >> a[i];
		}

		for1(i,n) cin >> x;

		sort(a+1,a+n+1);

		// debug() << range(a+1,a+1+n);

		cout << solve(1,0) << endl;

	}

	return 0;
}