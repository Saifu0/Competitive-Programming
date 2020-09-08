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
#define mod 998244353
#define inf (int)1e18

const int mxn = 3e5+10;
int fact[mxn];

void factorial(){
	fact[0] = 1;
	for1(i,mxn-1) fact[i] = (fact[i-1]*i)%mod;
}

template<class T>
int solve(const vector<T>&a){
	int res = 1;
	fo(i,sz(a)){
		int j=i;
		while(j+1<sz(a) and a[j]==a[j+1]){
			j++;
		}
		res = (res*fact[j-i+1])%mod;
		i = j;
	}
	return res;
}

int32_t main(){
	NINJA;

	factorial();

	debug() << range(fact+1,fact+100);

	int n;

	cin >> n;

	vi a(n),b(n);
	vii p;

	fo(i,n){
		cin >> a[i] >> b[i];
		p.pb(make_pair(a[i],b[i]));
	}

	debug() << "press F";

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	sort(p.begin(), p.end());

	int v1 = fact[n];
	int v2 = solve(a);
	int v3 = solve(b);
	int v4 = solve(p);

	for1(i,n-1) if(p[i].second < p[i-1].second) v4=0;

	cout << ((v1 - v2 - v3 + v4)%mod + mod)%mod << endl;
	
	return 0;
}