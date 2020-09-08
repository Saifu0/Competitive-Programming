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

const int mxn = 1e5+50;
int n,k;
int dp[mxn];
int a[mxn];
int h[8010];

int32_t main(){
	NINJA;

	cin >> n >> k;
	k=min(k,8000ll);
	fo(i,n){
		int x; cin >> x;
		h[x]++;
	}

	dp[0]=1;
	for(int i=0;i<=8000;i++){	
		if(h[i]!=0){
			for(int j=k;j>=1;j--){
				dp[j] = (dp[j]+h[i]*dp[j-1])%mod; 
			}
		}
	}
	int ans = 0;
	fo(i,k+1) ans = (ans + dp[i])%mod;

	cout << ans << endl;
	
	return 0;
}