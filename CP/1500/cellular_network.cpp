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
int a[mxn],b[mxn];
int n,m;
bool vis[mxn];

bool in_range(int l, int r, int val){
	return (val >= l && val <= r);
}

bool check(int mid){
	memset(vis,false,sizeof(vis));
	int i =0;
	int j = 0;
	while(i<m && j<n){
		int l = b[i]-mid,r=b[i]+mid;
		// cout << l << " " << r << endl;
		while(j<n && in_range(l,r,a[j])){
			vis[j] = 1;
			j++;
		}
		i++;
	}
	bool ok = 1;
	fo(i,n) ok &= (vis[i]==1);
	return ok;
}

int32_t main(){
	NINJA;

	cin >> n >> m;
	fo(i,n) cin >> a[i];
	fo(i,m) cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);

	int l=-1e12,r=1e12;
	int ans = inf;
	while(l<=r){
		int mid = l+(r-l)/2;
		if(check(mid)){
			ans = min(ans,mid);
			r = mid-1;
		}else l = mid+1;
	}
	cout << ans << endl;
	
	return 0;
}