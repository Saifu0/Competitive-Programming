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

const int mxn = 1e5+10;
vi g[mxn];
bool vis[mxn];
int red[mxn];
int green[mxn];
vi ans;

void dfs(int v, int tog){
	vis[v] = 1;
	for(int u : g[v]){
		// debug() << deb(v) deb(u);
		if(tog==0) red[v]++;
		else green[v]++;
		tog = !tog;
		if(!vis[u]){
			// debug() << "before" deb(v) deb(u);
			// if(tog==0) red[v]++;
			// else green[v]++;
			// tog= !tog;
			// dfs(u,tog);
			// debug() << "after" deb(v) deb(u);
		}
		// debug() << deb(v) deb(u);
	}
}

int32_t main(){
	NINJA;
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		for1(i,n) g[i].clear(), vis[i] = 0, red[i] = 0, green[i] = 0;
		fo(i,m){
			int u,v; cin >> u >> v;
			g[u].pb(v);
			g[v].pb(u);
		}

		for1(i,n){
			if(!vis[mxn]){
				dfs(i,0);
			}
		}

		for1(i,n){
			cout << red[i] << " " << green[i] << endl;
		}

		

		cout << endl;
	}
	


	
	return 0;
}