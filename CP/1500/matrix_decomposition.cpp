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

ll solve(ll a, ll n){
	ll res = 1;

	while(n){
		if(n&1) res = (res*a)%mod;
		a = (a*a)%mod;
		n>>=1;
	}

	return res;
}



int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		ll n,a; cin >> n >> a;

		ll ans = a;

		a = (a*a)%mod;

		ll start = 1;
		fo(i,n-1){
			start += 2;
			ll aa = solve(a,start)%mod;
			
			ans = (ans+aa)%mod;
			a = (a*aa)%mod;
		}

		cout << ans << endl;
	}

	return 0;
}