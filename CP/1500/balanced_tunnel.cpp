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
int pos[mxn];
int a[mxn];
int b[mxn];
int c[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;
	int cnt = 0;

	for1(i,n) cin >> a[i];
	for1(i,n) cin >> b[i];

	for1(i,n) pos[b[i]] = i;
	for1(i,n) c[i] = pos[a[i]];

	// for1(i,n) cout << c[i] << " ";

	int mx = -1;

	for1(i,n){
		if(c[i] > mx) mx = c[i];
		else cnt++;
	}

	cout << cnt << endl;
	
	return 0;
}