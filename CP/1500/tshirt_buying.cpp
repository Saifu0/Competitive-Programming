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

int32_t main(){
	NINJA;

	int n; cin >> n;
	vi p(n),a(n),b(n);

	fo(i,n) cin >> p[i];
	fo(i,n) cin >> a[i];
	fo(i,n) cin >> b[i];

	multiset<pair<int,int>> m[4];

	fo(i,n){

		m[a[i]].insert({p[i],i});

		if(a[i]!=b[i]){

			m[b[i]].insert({p[i],i});

		}

	}

	// for1(i,3) sort(m[i].begin(), m[i].end());

	// for1(i,3) debug() << deb(m[i]);

	int k; cin >> k;

	for1(i,k){

		int x; cin >> x;

		pair<int,int> pp;

		if(sz(m[x])==0){
			cout << -1 << " ";
			continue;
		}else{
			pp = *m[x].begin();
			cout << m[x].begin()->first << " ";
			m[x].erase(m[x].begin());
		}

		// debug() << deb(pp);

		for1(j,3){
z
			if(x==j) continue;

			auto it = m[j].find(pp);

			if(it!=m[j].end()) m[j].erase(m[j].find(pp));
			
			// m[j][id] = make_pair(inf,inf);
		}

	}
	
	return 0;
}