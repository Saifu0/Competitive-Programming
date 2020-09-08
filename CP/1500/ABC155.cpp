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

	int n,k; cin >> n >> k;
	ll a[n];
	fo(i,n) cin >> a[i];

	ll m = (n*(n-1))/2;

	vector<ll> v;
	fo(i,n){
		Fo(j,i+1,n){
			ll ans = a[i]*a[j];
			v.pb(ans);
		}
	}

	sort(v.begin(),v.end());

	cout << v[k-1] << endl;

	return 0;
}