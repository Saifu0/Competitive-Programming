// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define all(a) a.begin(),a.end()
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

const int mxn = 1e5+10;

int32_t main(){
    NINJA;
    //memset(a,-1,sizeof(a));	
	vii a;
	int n,m; cin >> n >> m;
	for1(i,m){
		int x,y; cin >> x >> y;
		a.pb({x,y});
	}
	
	int ans = max(a[0].F + a[0].S - 1, a[m-1].S + n - a[m-1].F);  
	bool ok = 1;
	for1(i,m-1){
		ok &= abs(a[i].S-a[i-1].S) <= (a[i].F - a[i-1].F);
		ans = max(ans,max(a[i].S,a[i-1].S) + (a[i].F-a[i-1].F - abs(a[i].S-a[i-1].S))/2);
	}

	if(!ok) cout << "IMPOSSIBLE" << endl;
	else cout << ans << endl;
	

    return 0;
}

