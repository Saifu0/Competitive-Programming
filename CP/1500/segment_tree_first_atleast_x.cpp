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
int a[mxn];
int tree[4*mxn];

void build(int l, int r, int i){
	if(l==r){
		tree[i] = a[l];
		return;
	}

	int m = (l+r)/2;
	build(l,m,2*i);
	build(m+1,r,2*i+1);
	tree[i] = max(tree[2*i],tree[2*i+1]);
}

int query(int l,int r, int i, int x, int le){
	if(x>tree[i]) return - 1;
	if(l==r){
		return l;
	}
	int m = (l+r)/2;
	if(tree[2*i]>=x and le>=l) return query(l,m,2*i,x,le);
	else return query(m+1,r,2*i+1,x,le);

}

void update(int l, int r, int i, int pos, int val){
	if(l==r){
		tree[i] = val;
		return;
	}
	int m = (l+r)/2;
	if(pos<=m) update(l,m,2*i,pos,val);
	else update(m+1,r,2*i+1,pos,val);

	tree[i] = max(tree[2*i],tree[2*i+1]);
}

int32_t main(){
	NINJA;

	int n,q; cin >> n >> q;
	fo(i,n) cin >> a[i];

	build(0,n-1,1);

	while(q--){
		int t; cin >> t;
		if(t==1){
			int l,r; cin >> l >> r;
			update(0,n-1,1,l,r);
		}else{
			int x; cin >> x;
			int le; cin >> le;
			cout << query(0,n-1,1,x,le) << endl;
		}
	}
	
	return 0;
} 