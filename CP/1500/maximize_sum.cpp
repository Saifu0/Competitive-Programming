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

// const int mxn = 1e5+500;
// int n,k;
// ll a[mxn],b[mxn];

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;

		ll a[n],b[n];
		fo(i,n) cin >> a[i];
		
		int mn = INT_MIN;

		fo(i,n){
			ll x; cin >> x;
			b[i] = x;
			if(mn<abs(x)) mn = abs(x);
		}

		ll ans = 0;

		fo(i,n) ans += a[i]*b[i];

		ans += (k*mn);

		cout << ans << endl;
	}

	return 0;
}