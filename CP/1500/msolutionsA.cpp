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

int32_t main(){
	NINJA;

	int n; cin >> n;
	
	if(n>=400 && n<=599)cout << 8 << endl;
	if(n>=600 && n<=799)cout << 7 << endl;
	if(n>=800 && n<=999)cout << 6 << endl;
	if(n>=1000 && n<=1199)cout << 5 << endl;
	if(n>=1200 && n<=1399)cout << 4 << endl;
	if(n>=1400 && n<=1599)cout << 3 << endl;
	if(n>=1600 && n<=1799)cout << 2 << endl;
	if(n>=1800 && n<=19999)cout << 1 << endl;



	
	return 0;
}