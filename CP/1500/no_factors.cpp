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

void factors(mp &m, ll x){
	for(ll i=2;i<=sqrt(x);i++){
		if(x%i==0){
			while(x%i==0){
				m[i]+=1;
				x /= i;
			}
		}
	}
	if(x>1) m[x]++;
}

int main(){
	NINJA;

	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		mp m;
		fo(i,n){
			ll x; cin >> x; 
			factors(m,x);
		}

		ll ans =1;
		for(auto it=m.begin();it!=m.end();it++){
			ans *= (it->S+1);
		}
		cout << ans << endl;
	}

	return 0;
}