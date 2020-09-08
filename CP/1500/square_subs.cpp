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
		ll n; cin >> n;
		ll a[n];
		ll res = (n*(n+1))/2;
		fo(i,n) cin >> a[i];

		fo(i,n){
			if(a[i]%2==0 && a[i]%4!=0){
				--res;
				ll right = i+1;
				ll cc=0,ccc=0;
				while(right<n && a[right]%2!=0){
					++cc;
					--res;
					++right;
				}
				ll left = i-1;
				while(left>=0 && a[left]%2!=0){
					++ccc;
					--res;
					--left;
				}
				res -= (cc*ccc);
			}
		}
		cout << res << endl;
	}

	return 0;
}