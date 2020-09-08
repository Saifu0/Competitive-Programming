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


ll fast_expontation(ll x,ll y){
	ll res = 1;
	x = x%mod;
	if(x==0) return 0;

	while(y>0){
		if(y&1) 
			res = (res*x)%mod;
		y = y>>1; //y = y/2;
		x = (x*x)%mod;
	}
	return res;
}


// nCr
ll C(ll n, ll a){
	ll res = 1;
	for(int i=n;i>n-a;i--) res = (res*i)%mod; // X
	for(int i=1;i<=a;i++) res = (res*fast_expontation(i,mod-2))%mod;  // X*Y^(mod-2) == X/Y

	return res;
}

int main(){
	NINJA;
	ll n,a,b;

	cin >> n >> a >> b;
	ll tot = (fast_expontation(2,n)-1)%mod;
	tot = (tot-C(n,a) + mod)%mod;
	tot = (tot-C(n,b)+mod)%mod;

	cout << tot << endl;


	

	return 0;
}