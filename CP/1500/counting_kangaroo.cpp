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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 5e5+10;
int a[mxn];
int n;

bool check(int m){
	fo(i,m){
		if(a[i]*2 > a[n-m+i]) return false;
	}
	return true;
}

int32_t main(){
	NINJA;

	cin >> n;
	fo(i,n) cin >> a[i];

	sort(a,a+n);

	int ans = 0;

	int l=0,r=n/2;;
	while(l<=r){
		int m = (l+r)/2;
		if(check(m)){
			ans = max(ans,m);
			l = m+1;
		}
		else r = m-1;
	}

	cout << n-ans << endl;
	
	return 0;
}