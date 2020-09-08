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

const int mxn = 1e6+10;
int a[mxn];
int n;
int pref[mxn];

void read(){
	cin >> n;
	for1(i,n) cin >> a[i]; 
}

int32_t main(){
	NINJA;

	read();	
	for1(i,n) pref[i] = pref[i-1]^i;

	// for1(i,n) cout << pref[i-1] << " ";
	// cout << 2%1 << endl;
	int q = 0;
	for1(i,n){
		int full = n/i;
		if(full%2==0){
			q ^= a[i]^(pref[n%i]);
		}else{
			q ^= a[i]^(pref[n%i])^pref[i-1];
		}
		// cout <<q << endl;
	}
	cout << q << endl;

	
	return 0;
}