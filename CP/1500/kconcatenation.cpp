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

ll maxsubarray(vector<ll> a, int n){
	ll ans= -1e18;
	ll sum = 0,mn = 0;
	fo(i,n){
		sum += a[i];
		ans = max(ans,sum-mn);
		mn = min(mn,sum);
	}
	return ans;
}

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		
		vector<ll> a;
		fo(i,n){
			ll x; cin >> x;
			a.pb(x);
		}	

		if(k==1){
			cout << maxsubarray(a,n) << endl;
		}else{
			ll tot=accumulate(a.begin(),a.end(),0ll);
			//cout << tot << endl;
			fo(i,n) a.pb(a[i]);

			ll sum = maxsubarray(a,sz(a));
			if(tot>0){
				sum += tot*(k-2);
			}
			cout << sum << endl;
		}
	}

	return 0;
}