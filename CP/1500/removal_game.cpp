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
ll a[mxn];
ll dp[mxn][mxn];



int main(){
	NINJA;

	ll n; cin >> n;

	fo(i,n) cin >> a[i];

	for(ll gap=0;gap<n;gap++){
		for(ll i=0,j=gap;j<n;j++,i++){

			ll x = ((i+2) <= j) ? dp[i+2][j] : 0;
			ll  y = ((i+1) <= (j-1)) ? dp[i+1][j-1] : 0;
			ll z = (i <= (j-2)) ? dp[i][j-2] : 0;

			dp[i][j] = max(a[i] + min(x,y) , a[j] + min(y,z));
		}
	}

	cout << dp[0][n-1] << endl;

	return 0;
}