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

const int mxn = 1510;
int dp[26][mxn];
string s;
int n;

int32_t main(){
	NINJA;
	int n; cin >> n;
	string s; cin >> s;
	fo(c,26){
		fo(i,n){
			int need_to_paint=0;
			Fo(j,i,n){
				if(c!=s[j]-'a') need_to_paint++;
				dp[c][need_to_paint] = max(dp[c][need_to_paint],j-i+1);
			}	
		}
		for1(i,mxn-1) dp[c][i] = max(dp[c][i],dp[c][i-1]);
	}
	int q; cin >> q;
	while(q--){
		int m; cin >> m;
		char c; cin >> c;
		cout << dp[c-'a'][m] << endl;
	}

	return 0;
}