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

const int mxn = 1e5+10;
int pref[mxn];
int p[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;
	vi a(n);
	fo(i,n) cin >> a[i];
	string s; cin >> s;

	for1(i,n) p[i] = p[i-1] + a[i-1];

	fo(i,n){
		if(s[i]=='1') pref[i+1] = pref[i] + a[i];
		else pref[i+1] = pref[i];
	}

	int mx = pref[n];
	// cout << mx << endl;
	// reverse(s.begin(), s.end());

	// for1(i,n) cout << p[i] << " " << pref[i] << endl;

	int id = 0;
	fo(i,n){
		if(s[i]=='1'){
			mx = max(p[i]+pref[n]-pref[i+1],mx);
		}
	}
	cout << mx << endl;
		
	return 0;
	
}