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

const int mxn = 2e5+10;
vi g[mxn];
vi tree[mxn];
int u[mxn],v[mxn];
int d[mxn];

int32_t main(){
	NINJA;

	int n,m,k; cin >> n >> m >> k;
	fo(i,m){
		cin >> u[i] >> v[i];
		--u[i],--v[i];
		g[u[i]].pb(v[i]);
		g[v[i]].pb(u[i]);
	}
	queue<int> q;
	vector<bool> vis(n,false);
	q.push(0);
	vis[0]=1;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int y : g[x]){
			if(!vis[y]){
				vis[y] = 1;
				d[y] = d[x]+1;
				q.push(y); 
			}
		}
	}
	fo(i,m){
		if(d[u[i]]+1==d[v[i]]) tree[v[i]].pb(i);
		if(d[v[i]]+1==d[u[i]]) tree[u[i]].pb(i);
	}

	// debug(tree[0]);
	debug(tree[1]);
	debug(tree[2]);
	debug(tree[3]);
	debug(tree[4]);

	vi f(n);
	vector<string> res;
	fo(j,k){
		bool ok = 0;
		string s = string(m,'0');
		for1(i,n-1){
			s[tree[i][f[i]]] = '1';	
		}
		res.pb(s);
		for1(i,n-1){
			if(f[i]+1 < sz(tree[i])){
				ok = 1;
				f[i]++;
				break;
			}else{
				f[i] = 0;
			}
		}
		if(!ok) break;
	}
	cout << sz(res) << endl;
	for(string s : res) cout << s << endl;
	
	return 0;
}