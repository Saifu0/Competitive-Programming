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
		int n,k; cin >> n >> k;

		map<ll,vector< pair <ll,ll > > > m;

		fo(i,n){
			ll a,d,p; cin >> a >> d >> p;
			m[p].pb({d,a});
		}

		ll cnt = 0;

		for(auto it=m.begin();it!=m.end();it++){
			vector<pair<ll,ll>> v = it->S;
			if(v.size()==1){
				cnt++;
				continue;
			}

			cnt++;
			sort(v.begin(), v.end());

			ll start = v[0].F;
			Fo(i,1,sz(v)){
				if(v[i].S>=start){
					cnt++;
					start = v[i].F;
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}