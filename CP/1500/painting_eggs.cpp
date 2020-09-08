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

	vector<pair<int,int>> a;
	int n; cin >> n;

	fo(i,n){
		int x,y;cin >> x >> y;
		a.pb({x,y});
	}

	sort(a.begin(), a.end());

	int a1=0,b1 = 0;
	string ans = "";

	int r = 0, l = 0;
	for(;l<n;l++){
		while(r<n && abs((a1+a[r].F) - b1) <= 500 ){
			a1 += a[r].F;
			r++;
			ans += 'A';
		}

		if(r>=n)  break;
		l = r;
		b1 += a[r++].S;
		ans += 'G';
	}
	// cout << a1 << " " << b1 << endl;

	if(abs(a1-b1) <= 500) cout << ans << endl;
	else cout << -1 << endl;


	
	return 0;
}