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

const int mxn = 55;
vi a[mxn];
int n,k,p;
vi pref[mxn];
int dp[mxn][2001];

int solve(int i, int cnt){
	if(i>n) return 0;
	int &ans = dp[i][cnt];
	if(ans!=-1) return ans;
	ans = 0;
	for1(j,k){
		ans = max(ans,solve(i+1,cnt));
		if(cnt+j<=p){
			ans = max({ans,pref[i][j]+solve(i+1,cnt+j)});
		}
	}
	return ans;
}


int32_t main(){
	NINJA;

	int t; cin >> t;
	int start = 1;
	while(t--){
		memo(dp,-1);
		cin >> n >> k >> p;
		for1(i,n) a[i].clear(),pref[i].clear();
		for1(i,n){
			fo(j,k){
				int x; cin >> x;
				a[i].pb(x);
			}
		}

		for1(i,n){
			pref[i].pb(0);
			for1(j,k){
				pref[i].pb(pref[i][j-1]+a[i][j-1]);
			}
		}

		// for1(i,n){
		// 	debug() << deb(pref[i]);
		// }

		cout << "Case #" << start++ << ": " << solve(1,0) << endl;

	}
	
	return 0;
}