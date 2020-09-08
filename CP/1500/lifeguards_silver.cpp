// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

bool cmp(ii x, ii y){
	return x.S < y.S;
}

int32_t main(){
	NINJA;

	int n; cin >> n;
	vii a(n);
	fo(i,n) cin >> a[i].F >> a[i].S;
	sort(a.begin(), a.end(),cmp);
	int end = a[0].S;
	for1(i,n-1){
		int start1 = a[i].F;
		int end1 = a[i].S;

		if(start1<end){
			start1 = end;
			end = end1;
			a[i].F = start1;
			a[i].S = end1;
		}
	}
	vi ans;
	for(auto i : a) ans.pb(abs(i.F-i.S));
	sort(ans.begin(), ans.end());
	int sum = 0;
	for1(i,n-1) sum += ans[i];
	cout << sum << endl;

	return 0;
}

/*
int N; cin >> N;
	vector<pi> v(N);
	F0R(i,N) cin >> v[i].f >> v[i].s;
	sort(all(v)); v.pb({MOD,0});
	
	int mn = MOD, mx = 0, tot = 0;
	F0R(i,N) {
	    mn = min(mn,min(v[i].s,v[i+1].f)-max(mx,v[i].f));
	    tot += max(mx,v[i].s)-max(mx,v[i].f);
	    mx = max(mx,v[i].s);
	}
	
	cout << tot-max(mn,0);

	*/