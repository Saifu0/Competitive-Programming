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
int a[mxn];
int n,w,d,v;
int dp[mxn][2];
int pref[mxn];

int solve(int i, int turn){
	if(i>=n) return 0;
	int &ans =dp[i][turn];
	if(ans!=-1) return ans;
	ans = 0;
	for(int j=i;j<min(i+(turn==1 ? w : v),n);j++){
		ans = max({solve(i+1,turn),(pref[j]-(i>0 ? pref[i-1] : 0)+solve(j+2,turn)),ans});
	}
	return ans;
}

int32_t main(){
	NINJA;
	memo(dp,0);
	cin >> n >> w >> d;
	fo(i,n) cin >> a[i];
	pref[0] = a[0];
	for1(i,n-1) pref[i] = pref[i-1] + a[i];
	v = w+d;

	int ans1 = solve(0,1);
	int ans2 = solve(0,0);

	debug() << deb(ans1) deb(ans2);

	if(ans1-ans2>0){
		cout << "Wrong " << abs(ans1-ans2) << endl;
	}else if(ans1-ans2<0){
		cout << "Right " << ans2-ans1 << endl;
	}else{
		cout << "Both are Right " << endl;
	}

	
	return 0;
}

// 8 5 -2
// 4 5 6 1 2 7 8 9

// 10 9 -3
// 4 5 6 3 2 3 7 8 9 2

// 9 2 2 
// 4 5 6 1 2 3 7 8 9