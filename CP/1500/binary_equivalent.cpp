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

const int mxn = (1ll<<20)+5;
int a[22];

string binary_rep(int n){
	string ans;
	while(n){
		int rem = n%2;
		n/=2;
		ans += (rem + '0');
	}
	return ans;
}

int32_t main(){
	NINJA;

	int n; cin >> n;
	fo(i,n) cin >> a[i];
	vi ones,zeros;
	int mxN = 0;
	fo(i,n){
		int one = 0;
		int mx = 0;
		for(int j=30;j>=0;j--){
			if((1ll<<j)&a[i]){
				one++;
				mx = max(mx,j);
				mxN = max(mx,mxN);
			}
		}
		mx++;
		ones.pb(one);
		zeros.pb(mx-one);
	}
	mxN++;
	fo(i,n){
		if(ones[i]+zeros[i]<mxN) zeros[i] += mxN-(ones[i]+zeros[i]);
	}
	int cnt = 0;
	fo(i,(1ll<<n)){
		int one = -1,zero=-1;
		fo(j,n){
			if((1ll<<j)&i){
				one += ones[j];
				zero += zeros[j];
			}
		}
		debug() << deb(one) deb(zero);
 		if(one==zero and one!=-1) cnt++;
	}
	string bin = binary_rep(cnt);

	fo(i,mxN-sz(bin)) cout << "0";
	cout << (sz(bin) <= mxN ? bin : string(mxN,'0')) << endl;

	debug() << deb(ones) deb(zeros);


	return 0;
}


// 3
// 2 7 10