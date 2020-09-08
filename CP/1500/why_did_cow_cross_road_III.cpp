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
int a[mxn];

int32_t main(){
	NINJA;
  	freopen("maxcross.in", "rt", stdin);
 	freopen("maxcross.out", "wt", stdout);
	int n,k,m; cin >> n >> k >> m;
	for1(i,n) a[i] = 1;
	for1(i,m){
		int x; cin >> x;
		a[x] = 0;
	}

	// for1(i,n) a[i] += a[i-1];
	int sum = 0;
	for1(i,k) sum += a[i];
	int mn=abs(k-sum);
	// cout << mn << endl;
	for(int i=k+1;i<=n;i++){
		sum += a[i];
		sum -= a[i-k];
		mn = min(mn,abs(k-sum));
		// cout << mn << endl;
	}
	cout <<mn << endl;
	return 0;
}