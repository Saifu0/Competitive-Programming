#include<bits/stdc++.h>
using namespace std;

const int mxn = 1010;
int a[mxn];
int n;
int dp[mxn][305][2];

int solve(int i,int prev,int taken){
	if(i==n) return 0;
	if(i>n) return -1e9;

	int&ans = dp[i][prev][taken];

	if(ans!=-1) return ans;

	ans = 0;

	if(a[i] > prev or taken==0){
		ans += max(1+solve(i+1,a[i],1),solve(i+1,prev,taken));
	}else{
		ans += solve(i+1,prev,taken);
	}

	return ans;
}

int main(){
	int t; cin >> t;
	while(t--){
		for(int i=0;i<mxn;i++) for(int j=0;j<305;j++) dp[i][j][0]=dp[i][j][1] = -1;
		
		cin >> n;
		for(int i=0;i<n;i++) cin >> a[i];

		cout << solve(0,0,0) << endl;
	}
}

