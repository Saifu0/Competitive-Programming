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

	int t; cin >> t;
	while(t--){
		//int n; cin >> n;
		string s,r; cin >> s >> r;
		ll n = sz(s);

		vector<ll> k(n,0);

		//ll cnt = 0;

		fo(i,n){
			if(s[i]==r[i])continue;
			//cnt++;
			k[i] = 1;
		}

		ll i = 0;
		ll cnt = 0;
		while(i<n){
			if(k[i]==0){
				i++;
				continue;
			}
			ll j = i;
			while(j<n && k[j]==1) j++;
			cnt++;
			i = j;
		}

		ll xx = 0;
		fo(i,n){
			if(k[i]) xx++;
		}
		ll ans = xx*cnt;

		cout << ans << endl;
	}

	return 0;
}