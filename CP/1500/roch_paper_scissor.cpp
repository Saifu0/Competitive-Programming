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
int a[mxn],b[mxn],c[mxn];

int32_t main(){
	NINJA;
  	freopen("hps.in", "rt", stdin);
 	freopen("hps.out", "wt", stdout);
	int n; cin >> n;
	for1(i,n){
		char d; cin >> d;
		if(d=='H')a[i]++;
		if(d=='S')b[i]++;
		if(d=='P')c[i]++;
	}

	for1(i,n) a[i] += a[i-1],b[i] += b[i-1],c[i] += c[i-1];
	int mx = 0;
	for1(i,n){
		mx = max({mx,a[i]+max(b[n]-b[i-1],c[n]-c[i-1]),b[i]+max(a[n]-a[i-1],c[n]-c[i-1]),c[i]+max(a[n]-a[i-1],b[n]-b[i-1])});
	}
	cout << mx << endl;
	return 0;
}