#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 2345;
int dp[mxn][mxn];
int n,k;

int main(){
	NINJA;
	cin >> n >> k;

	Fo(i,1,n+1) dp[1][i] = 1;
	Fo(i,1,k){
		Fo(j,1,n+1){
			if(dp[i][j]==0) continue;
			for(int z=j;z<=n;z+=j){
				dp[i+1][z] += dp[i][j];
				if(dp[i+1][z]>=mod) dp[i+1][z] -= mod;
			}
		}
	}

	int ans = 0;
	Fo(i,1,n+1){
		ans += dp[k][i];
		if(ans>=mod) ans-=mod;
	}

	cout << ans << endl;

	return 0;
}