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

vector<int> solve(vector<int> a, int b){
	int n = a.size(); 
	// vector<int> ans(n+1);

	map<int,int> ans;

	map<int,int> m;
	int l=0,r=0;
	int cnt = 0;;

	while(r<n){
		if(m.find(a[r])==m.end()) m[a[r]]=0;
		m[a[r]]++;

		while(m.size()>b){
			m[a[l]]-=1;
			if(m[a[l]]==0) m.erase(a[l]);
			l++;
		}
		cnt = r-l+1;
		ans[0]++;
		ans[cnt]--;
		r++;
	}
	for1(i,n-1) ans[i] += ans[i-1];
	vector<int> sol;

	for(int i=0;i<n;i++) sol.push_back(ans[i]);

	return sol;
}

int32_t main(){
	NINJA;

	int n; cin >> n;
	vi a(n);
	fo(i,n) cin >> a[i];
	int b; cin >> b;
	debug() << deb(solve(a,b));
	
	return 0;
}

// 5
// 1 2 2 3 1
// 2