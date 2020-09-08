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
int tree1[mxn*4],tree2[mxn*4];
int a[mxn];

void build1(int l,int r, int i){
	if(l==r){
		tree1[i] = (l%2==0 ? -1:1)*a[l];
		return;
	}
	int m = (l+r)/2;
	build1(l,m,2*i);
	build1(m+1,r,2*i+1);

	tree1[i] = tree1[2*i]+tree1[2*i+1];
}

void build2(int l, int r, int i){
	if(l==r){
		tree2[i] = (l%2==0 ? -l : l)*a[l];
		return;
	}
	int m = (l+r)/2;
	build2(l,m,2*i);
	build2(m+1,r,2*i+1);
	
	tree2[i] = tree2[2*i]+tree2[2*i+1];
}

void update1(int l, int r, int i, int pos, int val){
	if(l==r){
		tree1[i] = (l%2==0 ? -1:1)*val;
		return;
	}
	int m = (l+r)/2;
	if(pos<=m)update1(l,m,2*i,pos,val);
	else update1(m+1,r,2*i+1,pos,val);

	tree1[i] = tree1[2*i]+tree1[2*i+1];
}

void update2(int l, int r, int i,int pos,int val){
	if(l==r){
		tree2[i] = (l%2==0 ? -l : l)*val;
		return;
	}
	int m = (l+r)/2;
	if(pos<=m)update2(l,m,2*i,pos,val);
	else update2(m+1,r,2*i+1,pos,val);

	tree2[i] = tree2[2*i]+tree2[2*i+1];
}

int query1(int l, int r,int i,int se, int ed){
	if(se>r || ed<l) return 0;
	if(l>=se and ed>=r) return tree1[i];

	int m = (l+r)/2;
	return query1(l,m,2*i,se,ed) + query1(m+1,r,2*i+1,se,ed);
}

int query2(int l, int r,int i,int se, int ed){
	if(se>r || ed<l) return 0;
	if(l>=se and ed>=r) return tree2[i];

	int m = (l+r)/2;
	return query2(l,m,2*i,se,ed) + query2(m+1,r,2*i+1,se,ed);
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	int start = 1;
	while(t--){
		int n,q; cin >> n >> q;
		for1(i,n) cin >> a[i];
		memo(tree1,0);
		memo(tree2,0);
		build1(1,n,1);
		build2(1,n,1);



		int ans = 0;
		while(q--){
			char c;
			int l,r; cin >> c >> l >> r;
			if(c=='U'){
				update1(1,n,1,l,r);
				update2(1,n,1,l,r);
				// debug() << range(tree1,tree1+2*n);
				// debug() << range(tree2,tree2+2*n);
			}else{
				ans += (l%2==0 ? -1 : 1)*(query2(1,n,1,l,r)-(l-1)*(query1(1,n,1,l,r)));
				debug() << deb(ans);
			}
		}
		cout << "Case " << "#" <<start++ << ": " << ans << endl;
	}
	
	return 0;
}