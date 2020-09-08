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

const int mxn = 1e6+50;
int dp[mxn],pref[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		string s; cin >> s;


		fo(i,sz(s)){
			if(i) pref[i] = pref[i-1] + (s[i]-'0');
			else pref[i] = (s[i]-'0');
		}

		for(int i=n-1;i>=0;i--){
			int x = (s[i]-'0') ^1;
			if(i+k-1<n){
				x += pref[i+k-1] - pref[i];
			}else{
				x += pref[n-1] - pref[i];
			}
			if(i+k<n) x+= dp[i+k];

			int r = pref[n-1] - pref[i] + (s[i]-'0');
			dp[i] = min(r,x);
		}

		int mn = inf;
		fo(i,n){
			int s = dp[i];
			if(i) s += pref[i-1];

			mn = min(mn, s);
		}
		cout << mn << endl;

		fo(i,n+1) pref[i] = dp[i] = 0;
	}
	
	return 0;
}