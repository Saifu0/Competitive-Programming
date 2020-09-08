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
bool vis[mxn][2];
int value[mxn];
int n,q;
int parent[mxn];

void init(){
	fo(i,mxn) g[i].clear(), vis[i][1] = vis[i][0] = 0; 
}

void dfs(int v, int tog, int src, int parent){
	if(v!=src and tog==0){
		value[src] += value[v];
		value[v] = 0;
	}
	if(vis[v][tog]==0){
		vis[v][tog] = 1;
		for(int u : g[v]){
			if(u!=parent){
				dfs(u,tog^1,src,v);
			}
		}
		// vis[v][tog] = 1;
	}
}

void find_parent(int v, int p){
	parent[v] = p;
	for(int u : g[v]) if(u!=p) find_parent(u,v);
}

int32_t main(){
	NINJA;
	
	int t; cin >> t;
	while(t--){
		init();
		cin >> n >> q;
		for1(i,n) cin >> value[i];
		fo(i,n-1){
			int u,v; cin >> u >> v;
			g[u].pb(v);
			g[v].pb(u);
		}

		find_parent(1,-1);

		while(q--){
			int x; cin >> x;
			if(vis[x][0]) continue;
			dfs(x,0,x,parent[x]);
		}

		for1(i,n) cout << value[i] << " ";
		cout << endl;

	}

	return 0;
}