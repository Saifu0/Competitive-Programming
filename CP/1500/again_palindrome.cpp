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

string s;
int dp[65][65];

int solve(int l, int r){
	if(l==r) return 1;
	if(l+1==r) return 2 + (s[l]==s[r]);

	int &ans = dp[l][r];
	if(ans!=-1) return ans;
	ans = 0;

	if(s[l]==s[r]) ans += 1 + solve(l+1,r-1);
	ans += solve(l+1,r);
	ans += solve(l,r-1);
	ans -= solve(l+1,r-1); // from this 2 last cases we have the string twice so we subtract it
                         // e.g abc left (b,c) ,right (a,b) now we took the b twice so we subtract one time

	return ans;
}

int32_t main(){
	NINJA;
	
	int t; cin >> t;
	while(t--){
		cin >> s;
		memset(dp,-1,sizeof(dp));
		cout << solve(0,sz(s)-1) << endl;
	}

	return 0;
}