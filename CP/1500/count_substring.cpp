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
		ll n,k,q; cin >> n >> k >> q;
		vector<ll> far(n+1);
		vector<ll> sumfar(n+1,0);

		string s; cin >> s;

		ll j = 1;
		ll cnt0 = 0, cnt1 = 0;

		if(s[0]=='1')  cnt1++;
		else cnt0++;

		for(ll i=1;i<=n;i++){
			while(j<=n and cnt0 <= k && cnt1 <=k){
				j++;
				if(j>n) break;
				if(s[j-1] == '1') cnt1++;
				else cnt0++;
			}
			far[i] = j;
			if(s[i-1]=='1') cnt1--;
			else cnt0--;
		}

		Fo(i,1,n+1) sumfar[i] = sumfar[i-1] + far[i];

	//	for(ll i : far) cout << i << " ";
		//cout << endl;

		while(q--){
			ll l,r; cin >> l >> r;
			ll k1 = l-1;
			ll k2 = r+1;

			while(k2-k1>1){
				ll mid = (k2+k1)/2;
				if(far[mid]<=r) k1=mid;
				else k2 = mid;
			}

			ll k = k1;

			//cout << k << endl;

			ll ans = sumfar[k]-sumfar[l-1] + (r-k)*(r+1) - (r*(r+1)/2 - l*(l-1)/2);
			cout << ans <<endl;
		}

	}

	return 0;
}