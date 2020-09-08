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

const int mxn = 1e3+10;

struct arr {
	int len,w,id;
} a[mxn];

ii b[mxn];
int n,m;
int dp[mxn][mxn];
vii sol;

bool cmp(arr x, arr y){
	return x.len > y.len;
}

int solve(int i,int j){
	if(i>n) return 0;
	if(j>m) return 0;

	int &ans = dp[i][j];
	if(ans!=-1) return ans;
	ans = solve(i+1,j);
	if(a[i].len <= b[j].F){
		ans = max(ans,a[i].w + solve(i+1,j+1));
	}

	return ans;

}

void path(int i, int j){
	if(i>n) return;
	if(j>m) return;

	int &ans = dp[i][j];
	if(ans==solve(i+1,j)) return path(i+1,j);
	else{
		sol.pb({a[i].id,b[j].S});
		path(i+1,j+1);
	}
}

int32_t main(){
	NINJA;

	memset(dp,-1,sizeof(dp));
	cin >> n;
	for1(i,n){
		cin >> a[i].len >> a[i].w;
		a[i].id = i;
	}

	sort(a+1,a+n+1,cmp);

	cin >> m;
	for1(i,m){
		cin >> b[i].F;
		b[i].S = i;
	}

	sort(b+1,b+m+1);
	reverse(b+1,b+m+1);

	int ans = solve(1,1);
	path(1,1);
	cout << sz(sol) << " " << ans << endl;
	for(auto i : sol) cout << i.F << " " << i.S << endl;	
	
	return 0;
}