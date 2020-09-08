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

const int mxn = 1e5+10;
int a[mxn],h[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;
	fo(i,n) cin >> a[i] >> h[i];

	int prev = -1e9;
	a[n] = 2*1e9+10;
	int cnt = 0;
	fo(i,n){
		if(prev < a[i]-h[i]){
			cnt++;
			prev = a[i];
 		}else if(a[i]+h[i] < a[i+1]){
 			cnt++;
 			prev = a[i] + h[i];
 		}else{
 			prev = a[i];
 		}
	}

	cout << cnt << endl;
	
	return 0;
}