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

priority_queue<ii> q;
int n;

int rev(int i){
	return n-i-1;
}

int mat[25][25];
bool ok;

void put(vii pos){
	ii t  =q.top();
	q.pop();

	if(t.first<pos.size()){
		ok = 1;
		return;
	}
	for(auto each : pos) mat[each.first][each.second] = t.second;
	t.first -= sz(pos);
	q.push(t);
}

int32_t main(){
	NINJA;

	mp m;

	cin >> n;
	fo(i,n*n){
		int x; cin >> x;
		m[x]++;
	}

	for(auto each : m) q.push({each.second,each.first});
	
	fo(i,n/2)
		fo(j,n/2)
			put({ {i,j}, {i,rev(j)}, {rev(i),j}, {rev(i),rev(j)} });

	if(n%2==1){
		fo(i,n/2){
			put({{i,n/2},{rev(i),n/2}});
			put({{n/2,i},{n/2,rev(i)}});
		}
		put({{n/2,n/2}});
	}

	if(ok){
		cout << "NO" << endl;
		return 0;
	}

	cout << "YES" << endl;
	fo(i,n){
		fo(j,n){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}