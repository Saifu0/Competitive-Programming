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

const int mxn = 2e5+500;


ll a[mxn];

ll index(vector<ll> &v,ll n, ll val){
	ll l=-1,r=n;
	while(r-l>1){
		ll m = (l+r)/2;
		if(v[m] >= val) r = m;
		else l=m;
	}
	return r;
}

ll solve(ll n){
	vector<ll> v(n,0);

	ll len  =1;
	v[0] = a[0];

	Fo(i,1,n){
		if(a[i]<v[0]) v[0] = a[i];
		else if(a[i]>v[len-1]) v[len++] = a[i];
		else v[index(v,len-1,a[i])] = a[i];
	}
	return len;
}

int main(){
	NINJA;

	ll n; cin >> n;
	fo(i,n) cin >> a[i];

	cout << solve(n) << endl;


	return 0;
}