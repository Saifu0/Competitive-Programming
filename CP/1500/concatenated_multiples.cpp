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

const int mxn = 2e5+20;
const int LOGN = 11;
int a[mxn];
int n,k;
vi g[LOGN];
int pw[LOGN];
int len[mxn];


int32_t main(){
	NINJA;

	cin >> n >> k;
	for1(i,n) cin >> a[i];

	pw[1] = 10%k;
	for(int i=2;i<LOGN;i++) pw[i] = (pw[i-1]*10)%k;

	for1(i,n){
		int x = a[i];
		while(x>0){
			x/=10;
			len[i]++;
		}
		g[len[i]].pb(a[i]%k);
	}

	for1(i,LOGN-1) sort(g[i].begin(), g[i].end());

	int ans = 0;

	for1(i,n){
		for1(j,LOGN-1){
			int rem = (a[i]*pw[j])%k;
			int xrem = (k-rem)%k;
			int l = lower_bound(g[j].begin(), g[j].end(),xrem)-g[j].begin();
			int r = upper_bound(g[j].begin(), g[j].end(),xrem)-g[j].begin();
			ans += (r-l);
			if(len[i]==j and (rem+a[i]%k)%k==0) ans--;
		}
	}

	cout << ans << endl;
	
	return 0;
}