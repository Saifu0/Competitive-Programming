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

	ld n,m; cin >> n >> m;
	while(n!=0 || m!=0){
		ld ans = 1;
		ld deno1 = n-m;
		ld deno2 = m;

		fo(i,n){
			ans *= (n-i);
			if(deno1 > 0.0){
				ans /= deno1;
				deno1--;
			}
			if(deno2 > 0.0){
				ans /= deno2;
				deno2--;
			}
		}

		n = (int)n;
		m = (int)m;
		ans = (int)ans;

		// printf("%d things taken %d at a time is %lld exactly.\n",n,m,ans);
		cout << n << " things taken " << m << " at a time is " <<   (int)ans << " exactly.\n";

		cin >> n >> m;
	}
	
	return 0;
}