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

const int mxn = 1e4+10;
ii a[mxn];
int n,m;

int solve(int x, int y, int i){
	int ans=0;
	int l=0,r=(1ll<<32);
	while(r-l>1){
		int mid = (l+r)/2;
		int nx = x + a[i].F*mid;
		int ny = y + a[i].S*mid;

		if(nx >= 1 && nx <= n && ny >= 1 && ny <= m){
			ans=mid;
			l = mid;
		}else{
			r = mid;
		}
	}

	return ans;
}

int32_t main(){
	NINJA;

	cin >> n >> m;
	int x,y; cin >> x >> y;

	int k; cin >> k;
	fo(i,k) cin >> a[i].F >> a[i].S;

	int ans =0 ;
	fo(i,k){
		int c = solve(x,y,i);
		ans += c;
		x += a[i].F*c;
		y += a[i].S*c;
	}

	cout << ans << endl;
	
	return 0;
}