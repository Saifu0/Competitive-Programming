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

const ll inf = 1e18;

int main(){
	NINJA;

	int n; cin >> n;
	vector<ll> a(n);

	fo(i,n) cin >> a[i];

	vector<bool> vis(n);

	ll ans = 0;

	fo(i,n){
		ll mxn = -inf;
		int ind = -1;
		fo(j,n){
			if(a[j] > mxn && !vis[j]){
				mxn = a[j];
				ind = j;
			}
		}
		ll nn = max((ll)ind+1,(ll)n-ind+1);
		
	}

	cout << ans << endl;

	return 0;
}