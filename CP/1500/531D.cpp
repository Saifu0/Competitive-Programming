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

int cnt[5];

int32_t main(){
	NINJA;

	int n; cin >> n;
	string s; cin >> s;
	for(char c : s){
		cnt[c-'0']++;
	}

	int need = n/3;
	if(cnt[0]==cnt[1] and cnt[1]==cnt[2]){
		cout << s << endl;
		return 0;
	}

	vector<bool> vis(n,false);

	int need0=0,need1=0,need2=0;

	fo(i,n){
		if(s[i]=='0' and need0!=need) vis[i] = 1,need0++;
		if(cnt[0]<need and s[i]!='0'){
			if(s[i]=='2' and cnt[2]>need) s[i] = '0',cnt[2]--,cnt[0]++,vis[i] = 1,need0++;
			else if(s[i]=='1' and cnt[1]>need) s[i] = '0',cnt[1]--,cnt[0]++,vis[i] = 1,need0++;
			
		}
	}

	fo(i,n){
		if(s[i]=='1' and need1!=need) vis[i] = 1,need1++;
		if(cnt[1]<need and s[i]!='1' and !vis[i]){
			if(s[i]=='2' and cnt[2]>need) s[i] = '1',cnt[2]--,cnt[1]++,vis[i]=1,need1++;
			else if(s[i]=='0' and cnt[0]>need) s[i] = '1',cnt[0]--,cnt[1]++,vis[i]=1,need1++;
		}
	}

	fo(i,n){
		if(s[i]=='2' and need2!=need) need2++;
		if(cnt[2]<need and s[i]!='2' and !vis[i]){
			if(s[i]=='1' and cnt[1]>need) s[i] = '2',cnt[1]--,cnt[2]++,need2++;
			else if(s[i]=='0') s[i] = '2',cnt[0]--,cnt[2]++,need2++;
		}
	}

	cout << s << endl;

	
	return 0;
}