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

ll solve(ll n, ll k){
	ll ans = 1;
	if(k>n-k) k = n-k;

	for(ll i=1;i<=k;i++)
		ans *= (n-i+1), ans /= i;

	return ans;
}

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		ll n,k; cin >> n >> k ;

		cout << solve(n-1,k-1) << endl;
	}

	return 0;
}