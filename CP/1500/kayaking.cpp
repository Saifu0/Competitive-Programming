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
int a[mxn];
int check[mxn];
int n;

int solve(){
	vi ans;
	fo(i,n){
		if(!check[i]) continue;
		ans.pb(a[i]);
	}
	sort(ans.begin(), ans.end());
	int sum =0 ;
	for(int i=0;i<n-2;i+=2) sum += abs(ans[i]-ans[i+1]);
	return sum;
}

int32_t main(){
	NINJA;

	cin >> n;
	n*=2;
	fo(i,n) cin >> a[i], check[i] = 1;
	int ans = inf;
	fo(i,n){
		fo(j,n){
			check[i] = check[j] = 0;
			ans = min(ans,solve());
			check[i] = check[j] = 1;
		}	
	}
	cout << ans << endl;
	return 0;
}