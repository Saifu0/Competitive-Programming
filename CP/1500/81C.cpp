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

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		string s,t; cin >> s >> t;
		string z;
		map<char,vector<int>> m;
		fo(i,sz(s)) m[s[i]].pb(i);
		// for(auto each : m){
		// 	cout << each.F << " ";
		// 	for(int i : each.S) cout << i << " ";
		// 	cout << endl;
		// }
		int i = 0;
		bool ok = 1;
		int cnt  =0;
		while(i<sz(t)){
			int cur = 0;
			while(cur<sz(s)){
				// cout << sz(m[t[i]]) << " ";
				if(sz(m[t[i]])==0){
					ok = 0;
					break;
				}
				auto id = lower_bound(m[t[i]].begin(), m[t[i]].end(),cur);
				if(id==m[t[i]].end()) break;
				cur = *id;
				cur++;
				i++;
				// cout << i << " " << cur << endl;
				if(i==sz(t)) break;
			}
			if(!ok) break;
			cnt++;
		}
		cout << (ok ? cnt : -1) << endl;
	}
	
	return 0;
}