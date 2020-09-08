#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)9e18

const int mxn = 1e5+50;
int ans = inf;

int sq(int a){
	return a*a;
}

void solve(vi a, vi b, vi c){
	for(auto x: a){
		auto y = lower_bound(b.begin(), b.end(),x);
		auto z = upper_bound(c.begin(), c.end(),x);
		if(y==b.end() || z==c.begin()) continue;

		z--;
		ans = min(ans,sq(x-*y)+sq(*y-*z)+sq(*z-x));
	}
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		ans = inf;
		int na,nb,nc; cin >> na >> nb >> nc;
		vi a(na), b(nb), c(nc);
		fo(i,na) cin >> a[i];
		fo(i,nb) cin >> b[i];
		fo(i,nc) cin >> c[i];

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		sort(c.begin(), c.end());

		solve(a,b,c); solve(a,c,b);
		solve(b,a,c); solve(b,c,a);
		solve(c,a,b); solve(c,b,a);

		cout << ans << endl;
	}
	
	return 0;
}