#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 1e5+50;
int a[mxn];
int n,m,k;


int32_t main(){
	NINJA;

	cin >> n >> m >> k;
	fo(i,n) cin >> a[i];

	vi b;
	fo(i,n-1){
		b.pb(a[i+1]-a[i]-1);
	}

	sort(b.rbegin(), b.rend());

	int ans = a[n-1] - a[0] + 1;

	fo(i,k-1) ans -= b[i];

	cout << ans << endl;
	
	return 0;
}