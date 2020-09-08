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
	int n;
	cin >> n;
	int k; cin >> k;
	long double a,b; cin >> a >> b;

	long double ans = 0.0;
	for1(i,n-1){
		long double c,d; cin >> c >> d;
		ans += sqrt(((c-a)*(c-a)) + ((d-b)*(d-b)));
		a = c;
		b = d;
	}
	// cout << ans << " ";
	ans = ans*k*1.0;
	ans = ans /50.00;

	cout << fixed  << setprecision(13) << ans << endl;
	
	return 0;
}