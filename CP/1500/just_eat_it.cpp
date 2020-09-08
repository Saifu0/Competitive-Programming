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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vi a(n);

		int sum = 0;
		fo(i,n) cin >> a[i] , sum += a[i];

		int mxn = -inf;
		int mx = 0;
		fo(i,n-1){
			mx += a[i];
			if(mx < 0) mx = 0;

			if(mx > mxn) mxn = mx; 
		}

		int mxn1 = -inf;
		int mx2 = 0;
		for1(i,n-1){
			mx2 += a[i];
			if(mx2 < 0) mx2 = 0;

			if(mx2 > mxn1) mxn1 = mx2; 
		}

		mxn = max(mxn,mxn1);
		if(sum>mxn) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	
	
	return 0;
}