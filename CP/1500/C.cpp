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

const int N = 300 * 1000 + 13;

int n;
ll a[N], b[N];

void solve(){
	cin >> n;
	fo(i,n) cin >> a[i] >> b[i];


	ll ans = 0, mn = 1e18;
	fo(i,n){
		int ni = (i+1)%n;
		ll val = min(a[ni],b[i]);
		ans += a[ni]-val;
		mn = min(mn, val);
	}
	ans += mn;
	cout << ans << endl;
}

int main(){
	NINJA;
	int t; cin >> t;
	while(t--) solve();

	return 0;
}