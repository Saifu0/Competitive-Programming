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

int power(int a, int b)	//a is base, b is exponent
{
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2 == 1)
		return (power(a,b-1)*a)%mod;
	int q = power(a,b/2);
	return (q*q)%mod;
}

int n;
int check(int c, vector<int>&b){
	int tot = 0;
	fo(i,n){
		tot += abs(power(c,i)-b[i]);
	}
	debug() << deb(c) deb(tot);
	return tot;
}

int32_t main(){
	NINJA;

	cin >> n;
	vi a(n);


	int sum  =0;
	fo(i,n) cin >> a[i];

	sort(a.begin(), a.end());




	int c=a[1];
	int tot = inf;

	for1(i,100000){
		int cnt = 0;
		if(pow(i,n-1)>inf) break;
		fo(j,n){
			cnt += abs(pow(i,j)-a[j]);
		}
		tot=min(cnt,tot);
	}

	cout << tot << endl;
	
	return 0;
}