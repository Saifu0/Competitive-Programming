// // ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

// #include<bits/stdc++.h>
// using namespace std;

// #define sim template < class c
// #define ris return * this
// #define dor > debug & operator <<
// #define eni(x) sim > typename \
//   enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
// sim > struct rge { c b, e; };
// sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
// sim > auto dud(c* x) -> decltype(cerr << *x, 0);
// sim > char dud(...);
// struct debug {
// #ifdef LOCAL
// ~debug() { cerr << endl; }
// eni(!=) cerr << boolalpha << i; ris; }
// eni(==) ris << range(begin(i), end(i)); }
// sim, class b dor(pair < b, c > d) {
//   ris << "(" << d.first << ", " << d.second << ")";
// }
// sim dor(rge<c> d) {
//   *this << "[";
//   for (auto it = d.b; it != d.e; ++it)
//     *this << ", " + 2 * (it == d.b) << *it;
//   ris << "]";
// }
// #else
// sim dor(const c&) { ris; }
// #endif
// };
// #define deb(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

// #define memo(a,val) memset(a,val,sizeof(a))
// #define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define all(a) a.begin(),a.end()
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,k,n) for(int i=k;i<n;i++)
// #define for1(i,n) for(int i=1;i<=n;i++)
// #define dloop(i,n) for(int i=n-1;i>=0;i--)
// #define iii tuple<int,int,int>
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define int long long
// #define ld long double
// #define pb push_back
// #define endl "\n"
// #define setbits __builtin_popcountll
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007
// #define inf (int)1e18

// const int mxn = 1e5+10;
// int a[mxn];
// int n,k;
// void solve(){
// 	cin >> n >> k;
// 	for1(i,n) cin >> a[i];
// 	int mx = 0;
// 	for1(i,n){
// 		int sum = 0;
// 		map<int,int> m;
// 		Fo(j,i,n+1){
// 			m[a[j]]++;
// 			if(m[a[j]]<=k) sum++;
// 			else if(m[a[j]]==k+1) sum -= k;
// 			mx = max(mx,sum);
// 		}
// 	}

// 	cout << mx  << endl;
// }

// int32_t main(){
// 	NINJA;
	
// 	int t; cin >> t;
// 	int s =1;
// 	while(t--){
// 		cout << "Case #" << s++ << ": " ;
// 		solve();
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

const int mxn = 1e5+10;

struct node
{
	int sum,pref;;
} tree[4*mxn];
int a[mxn];
vi freq[mxn];
bool clazy[4*mxn];
int lazy[mxn];

void merge(node&tot, node&a, node&b){
	tot.sum = a.sum + b.sum;
	tot.pref = max(a.pref,a.sum+b.pref);
}

void propagte(int i,int l, int r){
	if(l!=r){
		clazy[2*i] = 1;
		clazy[2*i+1] = 1;
		lazy[2*i] += lazy[i];
		lazy[2*i+1] += lazy[i];
	}
	tree[i].sum += lazy[i];
	tree[i].pref = max(tree[i].sum,0ll);
	clazy[i] = 0;
	lazy[i] = 0;
}

void update(int l,int r, int i,int pos,int val){
	if(clazy[i]) propagte(i,l,r);
	if(l==r){
		clazy[i] = 1;
		lazy[i] += val;
		propagte(i,l,r);
		return;
	}
	int m = (l+r)/2;
	if(pos<=m) update(l,m,2*i,pos,val);
	else update(m+1,r,2*i+1,pos,val);
	merge(tree[i],tree[2*i],tree[2*i+1]);
}

node query(int l,int r, int i,int se, int ed){
	if(clazy[i]) propagte(i,l,r);
	if(se>r || l>ed) return {0,0};
	if(l>=se and ed>=r) return tree[i];

	int m = (l+r)/2;
	node le = query(l,m,2*i,se,ed);
	node re = query(m+1,r,2*i+1,se,ed);
	node cur;
	merge(cur,le,re);
	return cur;
}

void solve(){
	int n,k; 
	cin >> n >> k;
	fo(i,4*mxn) tree[i].sum = tree[i].pref = 0;
	for1(i,n) cin >> a[i];
	int ans =0;

	for(int i=n;i>=1;i--){
		int x=a[i];
		freq[x].pb(i);
		int len = sz(freq[x]);
		update(1,n,1,i,1);
		if(len>k) update(1,n,1,freq[x][len-k-1],-k-1);
		if(len>k+1) update(1,n,1,freq[x][len-k-2],k);
		ans = max(ans,query(1,n,1,i,n).pref);
	}
	cout << ans << endl;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	int s =1;
	while(t--){
		cout << "Case #" << s++ << ": " ;
		solve();
	}
	
	return 0;
}