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

int32_t main(){
	NINJA;
  // 	freopen("convention.in", "rt", stdin);
 	// freopen("convention.out", "wt", stdout);
	int n,m,c; cin >> n >> m >> c;
	int need = (n+1)/m;
	vi a(n);
	fo(i,n) cin >> a[i];
	vi g[m];
	sort(a.begin(), a.end());
	fo(i,m){
		fo(j,need){
			g[i].pb(a[(i*need+j <= n-1 ? i*need + j : n-1)]);
		}
		// if(i==m-1 and n%2==1) g[i].pb(a[n-1]);
		sort(g[i].begin(), g[i].end());
	}

	// fo(i,m){
	// 	for(int each : g[i]){
	// 		cout << each << " ";
	// 	}
	// 	cout << endl;
	// }
	int mx = 0;
	fo(i,m){
		mx = max(mx,abs(*g[i].begin()-g[i].back()));
	}
	cout << mx << endl;
	
	return 0;
}