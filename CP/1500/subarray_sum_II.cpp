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
int a[mxn];

int32_t main(){
	NINJA;

	int n,k; cin >> n >> k;
	for1(i,n) cin >> a[i];
	// sort(a+1,a+1+n);

	int sum =0 ;
	int cnt = 0;
	map<int,int> m;
	for1(i,n){
		sum += a[i];
		if(sum==k) cnt++;
		// if(m.find(k-sum)!=m.end()) cnt += m[k-sum];
		if(m.find(sum-k)!=m.end()) cnt += m[sum-k];
		m[sum]++;
	}
	cout << cnt << endl;
	
	return 0;
}