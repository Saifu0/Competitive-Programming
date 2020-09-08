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

const int mxn = 5e5+10;
int dp[mxn][2];
vi g[mxn];
vi ancestor;

void dfs(int v,int p,int tog,int dist){
	dp[v][tog] = 1;
	ancestor.pb(v);
	for(int u : g[v]){
		if(u!=p){
			dfs(u,v,tog,dist);
		}
	}
	ancestor.pop_back();
	if(sz(ancestor)>=dist){
		dp[ancestor[sz(ancestor)-dist]][tog] += dp[v][tog];
	}
}

void solve(){
	ancestor.clear();
	memo(dp,0);
	int n,a,b; cin >> n >> a >> b;
	for1(i,n) g[i].clear();

	Fo(i,2,n+1){
		int u; cin >> u;
		g[u].pb(i);
		g[i].pb(u);
	}
	dfs(1,0,0,a);
	dfs(1,0,1,b);

	ld ans = 0;
	for1(i,n){
		ans += (n*(dp[i][0]+dp[i][1]));
		ans -= (dp[i][0]*dp[i][1]);
		debug() << deb(dp[i][0]) deb(dp[i][1]);
	}
	cout << fixed << setprecision(12) << (ans*1.0/(n*n*1.0)) << endl;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	int s =1;
	while(t--){
		cout << "Case #" << s++ << ": " ;
		solve();
	}
	
	return 0;
}