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

string s;

bool ispalind(int i, int j){
	int l=i,r=j;
	while(l<r){
		if(s[l]!=s[r]) return 0;
		l++,r--;
	}
	return 1;
}

int32_t main(){
	NINJA;

	cin >> s;
	int n = sz(s);

	vector<string> a;
	bool ok =0;
	fo(i,n-2){
		bool x=0,y=0,z=0;
		x = ispalind(0,i);
		for(int j=i+1;j<n-1;j++){
			y = ispalind(i+1,j);
			z = ispalind(j+1,n-1);
			// debug() << deb(i) deb(j+1) ;
			// debug() << deb(s.substr(0,i+1)) << deb(s.substr(i+1,j+1)) << deb(s.substr(j+1,n));
			if(x and y and z){
				a.pb(s.substr(0,i+1));
				a.pb(s.substr(i+1,(j-i)));
				a.pb(s.substr(j+1,n));
				ok = 1;
				break;
			}
		}
		if(ok) break;
	}
	if(!ok) cout << "impossible";
	else{
		for(string i : a) cout << i << endl;
	}
	
	return 0;
}