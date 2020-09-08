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

	int n,k1,k2; cin >> n >> k1 >> k2;

	

	vi a(n),b(n);

	fo(i,n) cin >> a[i];
	fo(i,n) cin >> b[i];


	// sort(a.begin(), a.end());
	// sort(b.begin(), b.end());

	priority_queue<pair<int,pair<int,int>>> dif;

	fo(i,n){
		dif.push({(a[i]-b[i])*(a[i]-b[i]),{a[i],b[i]}});
	}


	while(k1>0 || k2>0){
	
		int x = dif.top().second.first;
		int y = dif.top().second.second;

		dif.pop();

		if(x>y and k1>0){
			x--;
			k1--;
		}else if(y>x and k2>0){
			y--;
			k2--;
		}else if(x>y and k2>0){
			y++;
			k2--;
		}else if(y>x and k1>0){
			x++;
			k1--;
		}else{
			if(k1>0){
				x--;
				k1--;
			}
			if(k2>0){
				y--;
				k2--;
			}
		}

		dif.push({(x-y)*(x-y),{x,y}});
	}

	int cost = 0;

	while(!dif.empty()){
		// cout << dif.top().first << " " << dif.top().second.first << " " << dif.top().second.second << endl;
		cost += (dif.top().first);
		dif.pop();
	}

	cout << cost << endl;
	
	return 0;
}