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


struct cost
{
	int s,e,l;
};


bool compare(cost a, cost b){
	return (a.s*b.l) < (a.l*b.s);
}


const int mxn = 110;
cost Cost[mxn];
int cache[mxn][mxn*mxn];
int n;

int dp(int i,int time){
	if(i>=n) return 0;
	int &ans = cache[i][time];
	if(ans!=-1) return ans;

	ans = 0;
	ans = max(dp(i+1,time),max(0ll,Cost[i].e-(time*Cost[i].l))+dp(i+1,time+Cost[i].s));
	return ans;
}

void solve(){
	memo(cache,-1);
	cin >> n;
	fo(i,n) Cost[i].s = Cost[i].e = Cost[i].l = 0;
	fo(i,n) cin >> Cost[i].s >> Cost[i].e >> Cost[i].l;

	sort(Cost,Cost+n,compare);

	cout << dp(0,0) << endl;
}


int32_t main(){
	NINJA;

	int t; cin >> t;
	int tt =1;
	while(t--){
		cout << "Case #" << tt++ << ": " ;
		solve();
	}
	
	return 0;
}