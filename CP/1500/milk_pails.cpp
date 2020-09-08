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

int a,b,c; 
const int mxn = 1010;
int dp[mxn];

int solve(int val){
	if(val>c) return inf;
	if(dp[val]!=-1) return dp[val];
	int ans = inf;
	ans = min({ans,c-val,solve(val+a),solve(val+b)});
	return dp[val] = ans;
}

int32_t main(){
	NINJA;
	freopen("pails.in", "rt", stdin);
	freopen("pails.out", "wt", stdout);
	memset(dp,-1,sizeof(dp));
	cin >> a >> b >> c;
	cout << c-solve(0) << endl;
	
	return 0;
}