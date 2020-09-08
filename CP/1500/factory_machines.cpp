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
int n,k;

bool check(int m){
	int cnt = 0;
	for1(i,n){
		cnt += (m/a[i]);
		if(cnt >= k) break;
	}
	return cnt>=k;
}

int32_t main(){
	NINJA;
	cin >> n >> k;
	for1(i,n) cin >> a[i];
	sort(a,a+n);
	int l=0,r=1e18;
	int ans = r;
	while(l<=r){
		int m = (l+r)/2;
		if(check(m)){
			ans = min(ans,m);
			r = m-1;
		}else l = m+1;
	}
	// cout << check(41666667) << endl;
	cout << ans << endl;
	
	return 0;
}