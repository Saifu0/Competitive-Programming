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


int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		ll n,k; cin >> n >> k;
		ll a[n+1];
		fo(i,n) cin >> a[i];

		vector<pair<ll,ll>> x;

		fo(i,n/2){
			ll mn = min(a[i],a[n-i-1]);
			ll mx = max(a[i],a[n-i-1]);
			x.pb({mn,mx});
		}

		map<ll,ll> m;

		vector<ll> pref(2*k+50,0);

		for(auto it: x){
			ll l = it.first+1;
			ll r = it.second+k;

			m[it.first+it.second]++;
			pref[l]++;
			pref[r+1]--;

		}

		//ll sum = 0;
		for(int i=1;i<=2*k+1;i++){
			pref[i] += pref[i-1];
		}

		ll min_change=1e9;

		for(int i=2;i<=2*k;i++){
			ll cnt0 = m[i];
			ll cnt1 = pref[i]-cnt0;
			ll cn2 = (n/2)-cnt1-cnt0;

			ll tt = 0*cnt0 + 1*cnt1 + 2*cn2;

			min_change = min(min_change,tt);
		}

		cout << min_change << endl;
	}

	return 0;
}