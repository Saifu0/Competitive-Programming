// #include<bits/stdc++.h>
// using namespace std;

// #define deb(x) cout << #x << " " << x << endl;
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,k,n) for(int i=k;i<n;i++)
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define ll long long
// #define pb push_back
// #define endl "\n"
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007

// void c_p_c()
// {
// 	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// }

// bool cmp(string a, string b){
// 	return (a+b < b+a);
// }


// int main(){
// 	c_p_c();
// 	int t; cin >> t;
// 	while(t--){
// 		string txt, pat;
// 		cin >> txt >> pat;

// 		string ans = "";
// 		fo(i,sz(pat)){
// 			int id = txt.find(pat[i]);
// 			txt.erase(id,1);
// 		}

// 		vector<string> s = {pat};
// 		for(auto c : txt) s.pb(string(1,c));

// 		sort(s.begin(), s.end(),cmp);
	
// 		for(string each : s) cout << each;
// 		cout << endl;
// 	}

// 	return 0;
// }

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

bool compare(string x, string y){
	if(x+y < y+x) return 1;
	else return 0;
}

int solve(){
	string texted_i_got, patter_i_got;
	cin >> texted_i_got >> patter_i_got;

	string ans = "";
	fo(i,patter_i_got.size()){
		int id = texted_i_got.find(patter_i_got[i]);
		texted_i_got.erase(id,1);
	}

	vector<string> txt = {patter_i_got};
	for(auto ch : texted_i_got) txt.pb(string(1,ch));

	sort(txt.begin(), txt.end(),compare);

	for(string each : txt) cout << each;
	cout << endl;
}

int32_t main(){
	NINJA;

	int _; cin >> _;
	while(_--){
		solve();
	}
	
	return 0;
}
