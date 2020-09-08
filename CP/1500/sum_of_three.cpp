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

const int mxn = 5123;
vector<pair<ll,ll>> a;

int main(){
	NINJA;

	ll n,x;
	cin >> n >> x;

	fo(i,n){
		ll x; cin >> x;
		a.pb({x,i});
	}

	sort(a.begin(), a.end());

	for(ll i=n-1;i>=0;i--){
		ll j = 0;
		ll k = i-1;

		while(j<k){
			if(a[i].F+a[j].F+a[k].F==x){
				cout << a[j].S+1 << " " << a[k].S+1 << " " << a[i].S+1 << endl;
				return 0;
			}else if(a[i].F+a[j].F+a[k].F>x){
				k--;
			}else{
				j++;
			}
		}
	}

	cout << "IMPOSSIBLE" << endl;

	return 0;
}