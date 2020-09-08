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

int32_t main(){
    NINJA;
	int n = 4;
	int a[4];
	fo(i,4) cin >> a[i];
	
	int d; cin >> d;
	int ans = 0;
	fo(i,4) ans += (d/a[i]);
		

	//cout << ans << endl;
	ans = d;
	int tot = 0;
	for(int i=1;i<(1ll<<4);i++){
		int lcm = 1;
		int digit = 0;
		fo(j,4){
			if(i&(1ll<<j)){
				digit++;
				lcm = (lcm*a[j])/(__gcd(lcm,a[j]));
			}
		}
		int cur = d/lcm;
		//cout << cur << endl;
		if(digit%2==0) ans += cur;
		else ans -= cur;
	}

	cout << d- ans << endl;
    	
    return 0;
}

