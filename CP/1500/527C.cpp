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

vector<string> v;
string res;
int n;

bool check(string pref, string suf){
	multiset<string> vv,p,s;
	string ans = pref + suf.substr(n-2);

	fo(i,n-1){
		vv.insert(ans.substr(0,n-i-1));
		p.insert(ans.substr(0,n-i-1));
		s.insert(ans.substr(i+1));
		vv.insert(ans.substr(i+1));
	}

	if(vv==multiset<string>(v.begin(), v.end())){
		fo(i,2*n-2){
			if(p.count(v[i])){
				res += 'P';
				p.erase(p.find(v[i]));
			}else if(s.count(v[i])){
				res += 'S';
				s.erase(s.find(v[i]));
			}else{
				assert(false);
			}
		}
		return true;
	}
	return 0;
}

int32_t main(){
	NINJA;

	vector<string> big; 
	cin >> n;
	
	fo(i,2*n-2){
		string s; cin >> s;
		v.pb(s);
		if(sz(s)==n-1) big.pb(s);
	}

	if(check(big[0],big[1])) cout << res << endl;
	else{
		check(big[1],big[0]);
		cout << res << endl;
	}

	return 0;
}