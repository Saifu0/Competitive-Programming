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
	ll t; cin >> t;
	while(t--){
		ll n,k; cin >> n >> k;
		ll a[n];

		fo(i,n) cin >> a[i];

		ll dif = 0;

		sort(a,a+n);

		ll cnt = 0;

		for(ll i=n-1;i>=0;i--){
			if(a[i]>=k){
				cnt++;
				dif += a[i]-k;
			}else{
				if(dif >= k-a[i]){
					cnt++;
					dif -= k-a[i];
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}