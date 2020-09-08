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


const int mxn = 1e5+10;
vi g[mxn];
int n;
int diameter;
int lvl[mxn];
int ans[mxn];

void dfs(int v, int p){
	for(int u : g[v]){
		if(u!=p){
			lvl[u] = lvl[v]+1;
			dfs(u,v);
		}
	}
}

int bfs(int src){
	queue<int> q;

	vector<int> d(n+1,-1);
	d[src] =0;
	ans[src] = max(ans[src],d[src]);
	q.push(src);
	int tp;
	while(!q.empty()){
		tp = q.front();
		q.pop();
		for(int  u : g[tp]){
			if(d[u]==-1){
				q.push(u);
				d[u] = d[tp] + 1;
				ans[u] = max(ans[u],d[u]);
				diameter = max(diameter,ans[u]);
			}
		}
	}
	return tp;
}

int node;

int dia(int v, int p, int cnt){
	if(cnt > diameter){
		diameter = cnt;
		node = v;
	}

	for(int  u : g[v]){
		if(u!=p){
			dia(u,v,cnt+1);
		}
	}
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int a,b,da,db; cin >> n >> a >> b >> da >> db;

		for1(i,n) g[i].clear(),lvl[i] = 0;

		fo(i,n-1){
			int u,v; cin >> u >> v;
			g[u].pb(v);
			g[v].pb(u);
		}

		diameter = 0;

		dia(1,-1,0);

		diameter = 0;

		dia(node,-1,0);

		// cout << "X";

		dfs(a,-1);

		debug() << deb(diameter) deb(lvl[b]);

		if((2*da>=min(db,diameter)) || (lvl[b]<=da)){
			cout << "Alice" << endl;
		}else{
			cout << "Bob" << endl;
		}

	}
	
	return 0;
}