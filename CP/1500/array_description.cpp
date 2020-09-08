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

	ll n,m; cin >> n >> m;
	vector<ll> a(n);

	fo(i,n) cin >> a[i];

	vector<vi> s(n,vi(m+1));

	for(int i=1;i<=m;i++){
		if((a[0] && i==a[0]) || !a[0]) s[0][i] = 1;
	}

	for(ll i=1;i<n;i++){
		for(ll j=1;j<=m;j++){
			if((a[i] && j==a[i]) || !a[i]){
				for(ll k=max(0LL,j-1);k<=min(m,j+1);k++){
					(s[i][j] += (s[i-1][k])) %= mod;
				}
			}
		}
	}

	ll cnt = 0;

	for(int i=1;i<=m;i++){
		cnt = (cnt+s[n-1][i])%mod;
	}

	cout << cnt << endl;


	return 0;
}