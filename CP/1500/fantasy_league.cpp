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

	ll t;cin >> t;
	while(t--){
		ll n,s; cin >> n >> s;

		ll a[n+1],b[n+1];

		fo(i,n) cin >> a[i];
		fo(i,n) cin >> b[i];

		ll minA = INT_MAX, minB = INT_MAX;

		fo(i,n){
			if(b[i] && a[i]<minA) minA = a[i];
			else if(!b[i] && a[i] <minB) minB = a[i];
		} 

		if(s+minA+minB <= 100){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}

	return 0;
}