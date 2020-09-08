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

const int mxn = 2e5+10;
int a[mxn];
int n,k;

bool check(int m){
	int sum = 0;
	fo(i,m-1) sum += a[i];
	int j = 0;
	for(int i=m-1;i<n;i++){
		sum += max(0ll,(a[i]-(j++)));
		if(sum>=k) return 1;
	}
	// debug() << deb(m) << deb(sum);
	return sum>=k; 
}

int32_t main(){
	NINJA;
	
	cin >> n >> k;
	fo(i,n) cin >> a[i];

	sort(a,a+n,greater<int>());

	// debug() << range(a,a+n);

	int l=1,r=n;
	int ans = inf;
	while(l<=r){
		int m = (l+r)/2;
		if(check(m)){
			ans = min(ans,m);
			r = m-1;
		}else{
			l = m+1;
		}
	}

	sort(a,a+n);

	// debug() << range(a,a+n);

	l=1,r=n;
	int ans2 = inf;
	while(l<=r){
		int m = (l+r)/2;
		if(check(m)){
			ans2 = min(ans2,m);
			r = m-1;
		}else{
			l = m+1;
		}
	}

	ans = min(ans,ans2);

	// debug() << deb(check(4));
	cout << (ans == inf ? -1 : ans) << endl;

	return 0;
}