

// #include<bits/stdc++.h>
// using namespace std;

// #define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,k,n) for(int i=k;i<n;i++)
// #define for1(i,n) for(int i=1;i<=n;i++)
// #define dloop(i,n) for(int i=n-1;i>=0;i--)
// #define iii tuple<int,int,int>
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define int long long
// #define ld long double
// #define pb push_back
// #define endl "\n"
// #define setbits __builtin_popcountll
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007
// #define inf (int)1e18


// const int N=1002;
// int a[mxn];
// int n,k;
// int dp[mxn];
// map<ii,int> q;
// int cache[mxn];
// int memo[110];

// int solve(int i){
// 	if(i>n) return 0;
// 	if(dp[i]!=-1) return dp[i];
// 	int ans = inf;
// 	for(int j=i;j<=n;j++){
// 		int tot = 0;
// 		memset(memo,0,sizeof(memo));
// 		for(int l=i;l<=j;l++){
// 			memo[a[l]]++;
// 			tot += (memo[a[l]] > 1 ? (memo[a[l]]==2 ? 2 : 1) : 0);
// 		}
// 		ans = min(k + tot + solve(j+1),ans); 
// 		dp[i] = ans;
// 	}
// 	return dp[i] = ans;
// }

// int32_t main(){
// 	NINJA;
	
// 	int t; cin >> t;
// 	while(t--){
// 		q.clear();
// 		memset(dp,-1,sizeof(dp));
// 		cin >> n >> k;
// 		for1(i,n) cin >> a[i];
	

// 		cout << solve(1) << endl;
// 	}

// 	return 0;
// }


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
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin(),a.end()
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
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

const int N=1002;
int a[N];
int n,k;
int cache[N];
int freq[110];

int dp(int i){
	if(i>n) return 0;
	int &res =cache[i];
	if(res!=-1) return res;
	res = inf;
	for(int j=i;j<=n;j++){
		int frequency = 0;
		memo(freq,0);
		for(int l=i;l<=j;l++){
			freq[a[l]]++;
			frequency += (freq[a[l]] > 1 ? (freq[a[l]]==2 ? 2 : 1) : 0);
		}
		res = min(k + frequency + dp(j+1),res); 
	}
	return  res;
}

int32_t main(){
	fastio;
	
	int t; cin >> t;
	while(t--){
		memo(cache,-1);
		cin >> n >> k;
		for(int i=1;i<=n;i++) 
			cin >> a[i];
		cout << dp(1) << endl;
	}
	
	return 0;
}
