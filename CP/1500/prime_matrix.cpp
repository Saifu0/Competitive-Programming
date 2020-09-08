// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 1e6+10;
int a[505][505];

int32_t main(){
	NINJA;

	vi prime(mxn,true);
	prime[1] = false;
	for(int i=2;i*i<=mxn;i++){
		if(prime[i]){
			for(int j=i*2;j<mxn;j+=i) prime[j] = 0;
		}
	}

	vi p;
	Fo(i,2,mxn) if(prime[i]) p.pb(i);

	int n,m; cin >> n >> m;
	fo(i,n) fo(j,m) cin >> a[i][j];

	int cnt = inf;
	fo(i,n){
		int c = 0;
		fo(j,m){
			if(prime[a[i][j]]) continue;
			auto it = lower_bound(p.begin(), p.end(),a[i][j]);
			// cout << a[i][j] << " " << *it << endl;
			c += *it-a[i][j];
		}
		cnt = min(cnt,c);
	}

	fo(i,m){
		int c = 0;
		fo(j,n){
			if(prime[a[j][i]]) continue;
			auto it = lower_bound(p.begin(), p.end(),a[j][i]);
			// cout << a[j][i] << " " << *it << endl;

			c += *it-a[j][i];
		}
		cnt = min(cnt,c);
	}

	cout << cnt << endl;
	
	return 0;
}