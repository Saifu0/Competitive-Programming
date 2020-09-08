#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(ll i=0;i<n;i++)
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

	ll n,k; cin >> n >> k;

	ll a[n+1];
	Fo(i,1,n+1) cin >> a[i];

	sort(a+1,a+n+1);
	ll pref[n+2];
	//pref[1] = a[1];

	Fo(i,1,n+1) pref[i] = pref[i-1] + a[i];

	ll ans = 1;
	ll val = a[1];
	Fo(i,2,n+1){
		int lo = 1, hi = i-1, pos = i;
		while(lo<=hi){
			int mid = (lo+hi)/2;
			ll cost = a[i]*(ll)(i-mid+1) - (pref[i]-pref[mid-1]);
			if(cost<=k){
				pos = mid;
				hi = mid-1;
			}else lo = mid+1;
		}	
		if((i-pos+1)>ans){
			ans = i-pos+1;
			val = a[i];
		}
	}
		

	cout << ans << " " << val << endl;

	return 0;
}