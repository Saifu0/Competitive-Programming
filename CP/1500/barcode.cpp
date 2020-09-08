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

int n,m,x,y;
const int mxn = 1e3+5;
string a[mxn];
int black[mxn],white[mxn];
int dp[mxn][3];

int32_t main(){
	NINJA;
	
	cin >> n >> m >> x >> y;
	fo(i,n) cin >> a[i];


	fo(i,m){
		fo(j,n){
			if(a[j][i]=='#') black[i]++;
			else white[i]++;
		}
	}

	for1(i,m-1){
		black[i] += black[i-1];
		white[i] += white[i-1];
	}

	dp[0][0] = dp[0][1] = 0;

	fo(i,m){
		for(int l=x;l<=y;i++){
			dp[i][0] = min(dp[i][0],dp[i-l])
		}
	}

	return 0;
}