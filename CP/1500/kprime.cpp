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

const int mxn = 100000+10;
int dp[mxn][6];

void init(){
	for(int k=2;k<mxn;k++){
		int i = k;
		int cnt = 0;
		int c = 0;
		while(i%2==0){
			i /= 2;
			c++;
		}
		if(c) cnt++;
		c=0;
		for(int j=3;j<=sqrt(i);j+=2){
			while(i%j==0){
				i /= j;
				c++;
			}
			if(c) cnt++;
			c=0;
		}
		if(i > 2) cnt++;
		dp[k][cnt] = 1;
	}

	for(int i=2;i<mxn;i++){
		for(int j=1;j<=5;j++){
			dp[i][j] += dp[i-1][j];
		}
	}
}

int32_t main(){
	NINJA;

	init();

	int t; cin >> t;
	while(t--){
		int l,r,k; cin >> l >> r >> k;

		cout << dp[r][k] - dp[l-1][k] << endl;
	}
	
	return 0;
}