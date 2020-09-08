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
int pref[mxn],pref0[mxn];

int32_t main(){
	NINJA;

	string a,b; cin >> a >> b;
	int n =sz(a);
	int m = sz(b);

	a = '*' + a;
	b = '*' + b;

	for1(i,m){
		pref[i] = pref[i-1] + (b[i] == '1');
		pref0[i] = pref0[i-1] + (b[i]=='0');
	}

	int sum = 0;

	for1(i,n){
		int idx = m - n + i;
		if(a[i]=='0') sum += pref[idx] - pref[i-1];
		else sum += pref0[idx] - pref0[i-1];
	}

	cout << sum << endl;
	
	return 0;
}