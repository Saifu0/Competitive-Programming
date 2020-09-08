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
#define mod  100000000 
#define inf (int)1e18

int n1,n2,k1,k2; 

int dp[101][101][11][11];

int solve(int t,int i, int j, int x, int y){
	if(t==(n1+n2)) return 1;

	int &ans =dp[i][j][x][y]; 
	if(ans!=-1) return ans%mod;
	ans = 0;
	if(i<n1 && x<k1) ans = (ans + solve(t+1,i+1,j,x+1,0) + mod)%mod;

	//int ans += 0;
	if(j<n2 && y<k2) ans = (ans + solve(t+1,i,j+1,0,y+1)+ mod)%mod; 

	return ans%mod;

}
int32_t main(){
	NINJA;

	cin >> n1 >> n2 >> k1 >> k2;

	memset(dp,-1,sizeof dp);

	cout << solve(0,0,0,0,0) << endl;
	
	return 0;
}