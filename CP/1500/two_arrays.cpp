#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

ll power(ll a, ll b)	//a is base, b is exponent
{
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2 == 1)
		return (power(a,b-1)*a)%mod;
	ll q = power(a,b/2);
	return (q*q)%mod;
}

ll solve(ll n, ll m){
	ll ans = 1;
	if(m>n-m) m = n-m;

	for(ll i=1;i<=m;i++)
	ans = (ans *(n-i+1))%mod, ans = (ans*power(i,mod-2))%mod;

	return ans; 
}


int main(){
	NINJA;

	ll n,m; cin >> n >> m;

	cout << solve((n+2*m-1)%mod,(2*m)%mod) << endl;

	return 0;
}