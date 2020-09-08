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
int tree[4*mxn],tree2[4*mxn];
int a[mxn];
int lazy[4*mxn],lazy2[4*mxn];
int u[305],v[305];

void propagate(int i,int l, int r){
	if(l!=r){
		lazy[2*i]+=lazy[i];
		lazy[2*i+1]+=lazy[i];
	}
	tree[i]+=lazy[i];
	lazy[i]=0;
}

void build(int l,int r, int i){
	if(l==r){
		tree[i] = a[l];
		tree2[i] = a[l];
		return; 
	}
	int m = (l+r)/2;
	build(l,m,2*i);
	build(m+1,r,2*i+1);

	tree[i] = min(tree[2*i],tree[2*i+1]);
	tree2[i] = max(tree2[2*i],tree2[2*i+1]);
}

void update(int l, int r, int i, int se, int ed,int val){
	if(lazy[i]){
		propagate(i,l,r);
	}
	if(ed<l || se>r) return;
	if(se<=l and ed>=r){
		lazy[i]+=val;
		propagate(i,l,r);
		return;
	}
	int m = (l+r)/2;
	update(l,m,2*i,se,ed,val);
	update(m+1,r,2*i+1,se,ed,val);

	tree[i] = min(tree[2*i],tree[2*i+1]);
}

int query(int l,int r,int i,int se, int ed){
	if(lazy[i]) propagate(i,l,r);
	if(ed<l || se>r) return 1e9;
	if(l>=se and ed>=r) return tree[i];
	int m = (l+r)/2;
	return min(query(l,m,2*i,se,ed),query(m+1,r,2*i+1,se,ed));
}

void propagte2(int i,int l, int r){
	if(l!=r){
		lazy2[2*i]+=lazy2[i];
		lazy2[2*i+1]+=lazy2[i];
	}
	tree2[i]+=lazy2[i];
	lazy2[i]=0;
}

void update2(int l, int r, int i, int se, int ed,int val){
	if(lazy2[i]){
		propagte2(i,l,r);
	}
	if(ed<l || se>r) return;
	if(se<=l and ed>=r){
		lazy2[i]+=val;
		propagte2(i,l,r);
		return;
	}
	int m = (l+r)/2;
	update2(l,m,2*i,se,ed,val);
	update2(m+1,r,2*i+1,se,ed,val);

	tree2[i] = max(tree2[2*i],tree2[2*i+1]);
}

int query2(int l,int r,int i,int se, int ed){
	if(lazy2[i]) propagte2(i,l,r);
	if(ed<l || se>r) return -1e9;
	if(l>=se and ed>=r) return tree2[i];
	int m = (l+r)/2;
	return max(query2(l,m,2*i,se,ed),query2(m+1,r,2*i+1,se,ed));
}

vi out;
int ans;
vi st[mxn],et[mxn];

int32_t main(){
	NINJA;

	int n,m; cin >> n >> m;
	for1(i,n) cin >> a[i];
	build(1,n,1);

	for1(i,m){
		cin >> u[i] >> v[i];
		update(1,n,1,u[i],v[i],-1);
		update2(1,n,1,u[i],v[i],-1);
		st[u[i]].pb(v[i]);
		et[v[i]].pb(u[i]);
	}

	int index=0;
	for1(i,n){
		for(auto it:st[i]){
			update(1,n,1,i,it,1);
			update2(1,n,1,i,it,1);
		}
		int mx = query2(1,n,1,1,n);
		int mn = query(1,n,1,1,n);
		if(mx-mn>ans){
			ans = mx-mn;
			index=i;
		}
		for(auto it:et[i]){
			update(1,n,1,it,i,-1);
			update2(1,n,1,it,i,-1);
		}
	}

	if(index){
		for1(i,m){
			if(index>=u[i] and index<=v[i]) continue;
			out.pb(i);
		}
	}

	cout << ans << endl;
	cout << sz(out) << endl;
	for(int i : out ) cout << i << " ";
	
	return 0;
}