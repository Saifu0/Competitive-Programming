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

const int mxn =	2e5+10;
int a[mxn],b[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		for1(i,n) cin >> a[i];

		for1(i,k) cin >> b[i];

		sort(a+1,a+n+1);
		sort(b+1,b+k+1);

		int i = 1 , j = n, p = 1;

		int ans = 0;
		while(p<=k && b[p] == 1){
			ans += a[j] + a[j];
			j--;
			p++;
		}

		for(int q=k;q>=p;q--){
			ans += a[j--] + a[i++];
			b[q] -= 2;
			while(b[q] > 0) i++, b[q]--;
		}

		cout << ans << endl;
	}
	
	return 0;
}