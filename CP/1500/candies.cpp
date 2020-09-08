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

const int mxn = 2e5+10;
int a[mxn],pref1[mxn],pref2[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	int start = 1;
	while(t--){
		int n,q; cin >> n >> q;
		for1(i,n) cin >> a[i];
		for1(i,n) pref1[i] = pref1[i-1] + (i%2==0 ? -1 : 1)*a[i];
		for1(i,n) pref2[i] = pref2[i-1] + (i%2==0 ? -1*i : i)*a[i];
		int ans =0 ;

		// for1(i,n) cout << pref1[i] << " " << pref2[i] << endl;

		while(q--){
			char c; cin >> c;
			if(c=='Q'){
				int l,r; cin >> l >> r;
				ans +=  (l%2==0 ? -1 : 1)*(pref2[r]-pref2[l-1]-(l-1)*(pref1[r]-pref1[l-1]));
			}else{
				int l,r; cin >> l >> r;
				a[l] = r;
				for1(i,n) pref2[i] = pref1[i] = 0;
				for1(i,n) pref1[i] = pref1[i-1] + (i%2==0 ? -1 : 1)*a[i];
				for1(i,n) pref2[i] = pref2[i-1] + (i%2==0 ? -1*i : i)*a[i];
			}
		}

		cout << "Case " << "#" <<start++ << ": " << ans << endl;
	}
	
	return 0;
}