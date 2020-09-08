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

const int mxn = 1e6+10;
int a[mxn];
int n,k;

bool check(int m){
	int sum=0;
	fo(i,n){
		if(a[i]>m) sum += a[i]-m;
	}
	if(sum>=k) return true;
	else return false;
}

int32_t main(){
	NINJA;

	cin >> n >> k;
	fo(i,n) cin >> a[i];

	int l=0,r=2e9+10;
	int ans = r;
	while(l<=r){
		int m = l + (r-l)/2;
		if(check(m)){
			ans = m;
			l=m+1;
		}else{
			r = m-1;
		}
	}
	cout << ans << endl;
	
	return 0;
}