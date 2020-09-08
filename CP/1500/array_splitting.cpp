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

const int mxn = 3e5+500;
int a[mxn];

int32_t main(){
	NINJA;

	int n,k; cin >> n >> k;
	fo(i,n) cin >> a[i];
	vi aa;
	Fo(i,1,n) aa.pb(a[i-1]-a[i]);
	int ans = a[n-1]-a[0];
	sort(aa.begin(), aa.end());
	fo(i,k-1) ans += aa[i];

	cout << ans << endl;
	
	return 0;
}