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

const int mxn = 2e5+10;
vi g[mxn];
int n;
int sub[mxn];
int subAns[mxn];
int ans[mxn];

void preprocessing(int v,int p){
	sub[v]=1;
	subAns[v]=0;

	for(int u : g[v]){
		if(u!=p){
			preprocessing(u,v);
			sub[v] += sub[u];
			subAns[v] += subAns[u]+sub[u];
		}
	}
}

void dfs(int v, int p, int par){
	ans[v] = subAns[v]+(par+(n-sub[v]));

	for(int u : g[v]){
		if(u!=p) dfs(u,v,ans[v]-(subAns[u]+sub[u]));
	}
}

int32_t main(){
	NINJA;
	
	cin >> n;
	fo(i,n-1){	
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}

	preprocessing(1,-1);

	dfs(1,-1,0);

	for1(i,n) cout << ans[i] << " " ;

	return 0;
}