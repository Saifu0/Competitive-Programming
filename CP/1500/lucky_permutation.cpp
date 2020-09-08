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

	int n; cin >> n;
	if(n%2==0){
		cout << -1 << endl;
		return 0;
	}

	fo(i,n) a[i] = i, b[i] = i+1, c[i] = (a[i]+b[i])%n;
	b[n-1] = 0;

	c[n-1] = (b[n-1]+a[n-1])%n;

	fo(i,n) cout << a[i] << " ";
	cout << endl;
	fo(i,n) cout << b[i] << " ";
	cout << endl;
	fo(i,n) cout << c[i] << " ";
	cout << endl;
	
	return 0;
} 