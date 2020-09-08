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
int freq[mxn][26];

int32_t main(){
	NINJA;

	int n; cin >> n;
	string s; cin >> s;

	fo(i,n){
		freq[i][s[i]-'a']++;
	}

	for1(i,n-1){
		fo(j,26){
			freq[i][j] += freq[i-1][j];
		}
	}

	map<int,vector<pair<int,int>>> p;

	fo(i,26){
		fo(j,n){
			if(freq[j][i]){
				p[i].pb({freq[j][i],j});
			}
		}
		sort(p[i].begin(), p[i].end());
	}


	int m; cin >> m;

	while(m--){
		string a; cin >> a;
		vector<int>	f(26,0);

		fo(i,sz(a)) f[a[i]-'a']++;

		int mx = 0;
		fo(i,26){
			if(f[i]==0) continue;
			int l=0,r=sz(p[i])-1;
			int ans=r-1;
			while(l<=r){
				int mid = (l+r)/2;
				if(p[i][mid].first >= f[i]){
					ans=mid;
					r=mid-1;
				}else{
					l=mid+1;
				}
			}
			mx=max(mx,p[i][ans].second);
		}
		cout << mx+1 << endl;
	}
	
	return 0;
}