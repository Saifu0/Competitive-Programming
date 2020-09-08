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

int power(int a, int n){
	int res = 1;
	while(n){
		if(n&1) res = (res * a)%5ll;
		a = (a*a)%5ll;
		n>>=1;
	}
	return res;
}

int32_t main(){
	NINJA;
		
	string s; cin >> s;
	int n  =sz(s);
	int rem = s[n-1] - '0';
	int ans = 1ll + power(2,rem) + power(3,rem) + power(4,rem);

	cout << ans%5ll << endl;

	return 0;
}