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

bool check(string s, int sum){
	int ss = 0;
	for(char c : s) ss += (c-'0');
	return ss<=sum;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		string s;
		int n; cin >> s >> n;

		int sum = 0;
		for(char c : s) sum += (c-'0');

		if(sum<=n){
			cout << 0 << endl;
			continue;
		}

		debug() << deb(sum);

		int ans = 0;
		int ten = 1;

		for(int i=sz(s)-1;i>=0;i--){
			int val = s[i]-'0';

			int cnt = 0;

			while(val>0){

				val++;
				cnt++;

				if(val==10){

					val = 0;

					if(i==0) break;

					int j = i-1;
					while(j>=0 and s[j]-'0' + 1 == 10){
						s[j] = '0';
						j--;
					}

					if(j<0) break;

					int cc = s[j]-'0';
					cc++;

					s[j] = cc+'0';

					s[i] = '0'; 
				}

				char c = val + '0';

				s[i] = c;

				if(check(s,n)){
					break;
				}
			}

			ans = ten*cnt + ans;
			
			if(check(s,n)) break;

			ten *= 10;
		}

		debug() << deb(s);

		cout << ans << endl;
		
	}
	
	return 0;
}