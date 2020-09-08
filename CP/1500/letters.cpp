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
int a[mxn],b[mxn];
// int pref[mxn];

int32_t main(){
	NINJA;

	int n,m; cin >> n >> m;
	fo(i,n) cin >> a[i];
	
	vi pref(n+1,0);
	pref[0] = 0;

	for1(i,n) pref[i] = pref[i-1] + a[i-1];

	fo(i,m){
		int x; cin >> x;
		int idx = lower_bound(pref.begin(), pref.end(),x) - pref.begin();
		if(x==pref[n]){
			cout << n << " " << a[n-1] << endl;
			continue;
		}

		int ans = pref[idx];

		if(x <= pref[idx-1]){
			cout << idx << " " << x - pref[idx-2] << endl;
			continue;
		}

		cout << idx << " " << x - pref[idx-1] << endl;
	}

	return 0;
}