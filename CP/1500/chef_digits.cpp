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

int allowed[10];
int n;
int a[20];
int dp[20][200][2];

int solve(int i,int sum,int tog){
	if(i>=n){
		int s = sum;
		mp m;
		while(s!=0){
			m[s%10]++;
			s /= 10;
		}
		bool ok = 1;
		fo(j,10) ok &= (m[j]!=allowed[j]);
		return ok;
	}

	int&ans = dp[i][sum][tog];
	if(ans!=-1) return ans;

	int limit = 9;
	if(!tog) limit=a[i];

	ans = 0;
	fo(j,limit+1){
		if(tog or j<limit) ans += solve(i+1,sum+j,1);
		else ans += solve(i+1,sum+j,0);
	}

	return ans;
}

int go(int x){
	// cerr << "x : " << x << endl;
	int i = 0;
	while(x!=0){
		a[i++] = x%10;
		x /= 10;
	}

	
	memo(dp,-1);
	n = i;

	reverse(a,a+n);

	debug() << range(a,a+n);

	return solve(0,0,0);
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int l,r; cin >> l >> r;
		fo(i,10) cin >> allowed[i];

		cout << go(r)-go(l-1) << endl;
	}
	
	return 0;
}