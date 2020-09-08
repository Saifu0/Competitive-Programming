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

const int mxn = 1010;
string a[mxn];
int pref[mxn][mxn];

int32_t main(){
	NINJA;

	int n,m;
	cin >> n >> m;
	fo(i,n) cin >> a[i];

	int q; cin >> q;
	while(q--){
		int x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		pref[x1][y1]++;
		pref[x2+1][y2+1]++;
		pref[x2+1][y1]--;
		pref[x1][y2+1]--;
	}

	for1(i,n){
		for1(j,m){
			pref[i][j] += pref[i][j-1];
		}
	}

	for1(i,m){
		for1(j,n){
			pref[j][i] += pref[j-1][i];
		}
	}


	for1(i,n){
		for1(j,m){
			if(pref[i][j]%2==1){
				cout << !(a[i-1][j-1]-'0');
			}else{
				cout << a[i-1][j-1];
			}
		}
		cout << endl;
	}
	
	return 0;
}