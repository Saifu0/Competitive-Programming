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

int32_t main(){
	NINJA;

	string a,b; cin >> a >> b;

	if(sz(a)==2 and a[0]!=b[0] and a[1]!=b[0]){
		cout << 0 << endl;
		return 0;
	}
	
	vi id;

	int cnt = 0;
	int i=0,j=0;
	for(;i<sz(a),j<sz(b);i++,j++){
		if(a[i]==b[j]) continue;

		cnt++;
		if(cnt>1) break;
		char c = a[i];
		for(int k=i;k>=0 and a[k]==c;k--){
			id.pb(k+1);
		}
		i++;
	}

	if(cnt>1){
		cout << 0 << endl;
		return 0;
	}

	if(cnt==0){
		id.pb(sz(a));
	
		for(int i=sz(b)-1;i>=0;i--){
			if(a[i]!=b[i] || a[i]!=a[sz(a)-1]) break;
			id.pb(i+1);
		}
	}

	reverse(id.begin(), id.end());
	cout << sz(id) << endl;
	for(int i : id) cout << i << " ";

	
	return 0;
}	