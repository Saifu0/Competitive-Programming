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

const int mxn = 3e5+10;
int ans[mxn];
vi g[mxn];
int n;

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
			}
		}
	}
	// debug(d);
	// for1(i,n) cout << ans[i] << " ";
	return tp;
}

int32_t main(){
	NINJA;

	cin >> n;
	fo(i,n-1){
		int v,u; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}

	int diameter_end_1 = bfs(1);
	// debug(diameter_end_1);
	int diameter_end_2 = bfs(diameter_end_1);
	// debug(diameter_end_2);
	bfs(diameter_end_2);

	for1(i,n) cout << ans[i]+1 << endl;
	
	return 0;
}