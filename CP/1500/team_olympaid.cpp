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

const int mxn = 5000+10;
int a[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;
	for1(i,n) cin >> a[i];

	vector<vector<int>> p(3);
	for1(i,n){
		if(a[i]==1) p[0].pb(i);
		if(a[i]==2) p[1].pb(i);
		if(a[i]==3) p[2].pb(i);
	}

	int mn = n;
	for(auto each : p) mn = min(mn,sz(each));

	cout << mn << endl;
	fo(i,mn){
		cout << p[0][i] << " " << p[1][i] <<  " " << p[2][i] << endl;
	}
	
	return 0;
}