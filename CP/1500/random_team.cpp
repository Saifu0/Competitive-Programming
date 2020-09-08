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

ll get(ll x){
	return x*(x-1)/2;
}

int main(){
	NINJA;

	ll n,m; cin >> n >> m;
	ll a = n-m+1;

	ll ans2 = get(a);

	a = n/m;
	
	ll ans1 = get(a+1)*(n%m) + get(a)*(m-n%m);

	cout << ans1 << " " << ans2 << endl;

	return 0;
}