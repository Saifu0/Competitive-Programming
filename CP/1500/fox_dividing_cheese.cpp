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

int solve(int &a, int f){
	int cnt = 0;
	while(a%f==0){
		a /= f;
		cnt++;
	}
	return cnt++;
}

int32_t main(){
	NINJA;

	int a,b; cin >> a >> b;
	if(a==b){
		cout << 0 << endl;
		return 0;
	}

	vi x,y;
	x.pb(solve(a,2));
	x.pb(solve(a,3));
	x.pb(solve(a,5));

	y.pb(solve(b,2));
	y.pb(solve(b,3));
	y.pb(solve(b,5));

	if(a!=b) cout << -1 << endl;
	else{
		int ans = abs(x[0]-y[0]) + abs(x[1]-y[1]) + abs(x[2]-y[2]);
		cout << ans << endl;
	}

	
	return 0;
}