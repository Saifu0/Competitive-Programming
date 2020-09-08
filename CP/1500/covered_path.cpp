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

const int mxn = 110;
int a[mxn],b[mxn];

int32_t main(){
	NINJA;

	int v1,v2; cin >> v1 >> v2;
	int t,d; cin >> t >> d;

	a[1] = v1;
	b[t] = v2;

	Fo(i,2,t+1) a[i] = a[i-1] + d;
	for(int i=t-1;i>=1;i--) b[i] = b[i+1] + d;

	int sum = 0 ;
	for1(i,t) sum += min(a[i],b[i]);
	cout << sum << endl;
	
	return 0;
}