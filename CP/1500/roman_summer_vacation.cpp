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

int fact(int n){
	int res = 1;
	for1(i,n) res = (res*i)%mod;
	return res%mod;
}

int power(int a, int n){
	int res=1;
	while(n){
		if(n&1) res=  (res*a)%mod;
		n>>=1;
		a = (a*a)%mod;
	}
	return res;
}

int32_t main(){
	NINJA;

	int i,j; cin >> i >> j;
	int n = i+j-2;
	int k = j-1;

	int den = fact(n);
	
	int kk = power(fact(k),mod-2)%mod;
	int nk = power(fact(n-k),mod-2)%mod;

	int ans = (den*kk + mod) %mod;
	ans = (ans*nk+mod)%mod;

	cout << ans << endl;

	return 0;
}