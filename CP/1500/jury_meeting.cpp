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
#define inf (int)1e12

const int mxn = 1e6+10;
int a[mxn],b[mxn],c[mxn];
vector<ii> d[mxn];
int n,m,k;

int32_t main(){
	NINJA;
	cin >> n >> m >> k;
	fo(i,m){
		int t,ar,dp,w;
		cin >> t >> ar >> dp >> w;
		if(ar==0) ar = -dp;
		d[t].pb({w,ar});
	}
	fo(i,mxn) a[i] = b[i] = c[i] = inf;
	int val = n*inf;
	fo(i,mxn){
		for(auto t : d[i]){
			if(t.S < 0) continue;
			int w = t.F;
			int id = t.S;
			if(w >= a[id]) continue;
			val -= a[id];
			a[id] = w;
			val += a[id];
		}
		b[i] = val;
	}

	fo(i,mxn) a[i] = inf;
	val = n*inf;
	dloop(i,mxn){
		for(auto t : d[i]){
			if(t.S > 0) continue;
			int w = t.F;
			int id = -t.S;
			if(w>=a[id]) continue;
			val -= a[id];
			a[id] = w;
			val += a[id];
		}
		c[i] = val;
	}
	int ans = inf*mxn;
	// cout << b[1] << " " << c[k+1] << endl; 
	for(int i=0;i+k+1<mxn;i++) ans = min(ans,b[i]+c[i+k+1]);
	if(ans >= inf) cout << -1 << endl;
	else cout << ans << endl ;
	
	return 0;
}