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

string mv ="UDLR";
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
const int mxn = 1e5+10;
ii p[mxn];

int32_t main(){
	NINJA;

	int x1,y1; cin >> x1 >> y1;
	int x2,y2; cin >> x2 >> y2;

	int n; cin >> n;
	string s; cin >> s;

	fo(i,n){
		int id=-1;

		fo(j,4) if(s[i]==mv[j]) id=j;

		assert(id!=-1);
		
		p[i+1] = make_pair(dx[id]+p[i].first,dy[id]+p[i].second);
	}

	debug() << range(p+1,p+1+n);
	
	int l=0,r=inf;

	int ans = inf;

	while(r-l>1){
		int m = (l+r)/2;
		int cnt = m/n,rem=m%n;
		int x = cnt*p[n].first+x1+p[rem].first;
		int y = cnt*p[n].second+y1+p[rem].second;
		int dist = abs(x-x2)+abs(y-y2);
		if(dist<=m){
			r=m;
		}else{
			l=m;
		}
	}
	if(r>5e17) r=-1;
	cout << r << endl;
	
	return 0;
}