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

const int mxn = 2e5+10;
int x[mxn],y[mxn];

int32_t main(){
	NINJA;

	while(true){
		int n; cin >> n;
		if(n==0) break;

		fo(i,n) cin >> x[i] >> y[i];
		int idx = n/2;

		int one = 0, two = 0;
		fo(i,n){
			int dx = x[i] - x[idx];
			int dy = y[i] - y[idx];
			if(dx==0 || dy==0) continue;
			if(dx*dy > 0 ) one++;
			else two++;
		}
		cout << one << " " << two << endl;
	}
	
	return 0;
}