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

template<class T> bool max_(T& a, const T& b) { 
	return a < b ? a = b, 1 : 0; } 

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vii a(n);
		fo(i,n){
			cin >> a[i].F >> a[i].S;
		}
		sort(a.begin(), a.end());
		mp dp;
		fo(i,n){
			max_(dp[a[i].F+a[i].S],dp[a[i].F]+a[i].S);
			max_(dp[a[i].F],dp[a[i].F-a[i].S]+a[i].S);
		}
		int mx = 0;
		// for(auto i : dp) cout << i.F << " " << i.S << endl;
		for(auto i : dp) mx = max(i.S,mx); 
		cout << mx << endl;
	}
	
	return 0;
}