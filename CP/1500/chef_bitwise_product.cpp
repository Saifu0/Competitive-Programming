#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
//#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
	ll x, y, l, r;
	cin>>x>>y>>l>>r;
	vector<ll> zs;
	bool eq = true;
	ll curr = 0;
	for(ll i=62; i>=0; --i) {
		ll p = (1LL<<i);
		if((l&p) == (r&p) && eq) {
			curr += r&p;
			continue;
		}
		if(eq) {
			eq = !eq;
		}
		if(r&p) {
			zs.pb(curr+p-1);
		}
		curr += r&p;
	}
	zs.pb(r);
	zs.pb(l);
	sort(all(zs));
	ll ans = zs[0];
	for(ll z : zs) {
		if((x&z) * (y&z) > (x&ans) * (y&ans))
			ans = z;
	}
	for(ll i=62; i>=0; --i) {
		ll p = (1LL<<i);
		if((ans&p) == 0)
			continue;
		if((x&p) == 0 && (y&p) == 0 && ans-p >= l)		
			ans -= p;
	}
	cout<<ans<<endl;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}