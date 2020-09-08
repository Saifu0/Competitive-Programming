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

	ll n; cin >> n;
	vector<ll> a(n);

	fo(i,n){
		cin >> a[i];
	}

	ll ans = n;

	ll j = 0;
	ll i=0;
	while(i<n){
		ll j = i+1;

		ll cnt = 0;
		while(j<n && a[i]==a[j]){
			cnt++;
			j++;
		}
		cnt += 1;

		ans += (cnt*(cnt-1))/2;
		i = j;
	}

	

	cout << ans << endl;

	return 0;
}