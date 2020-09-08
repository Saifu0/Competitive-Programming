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

const int mxn = 3010;
int a[mxn];
int c[mxn];
int n; 
int dp[mxn][3];

int solve(int i,int cnt, int prev){
	if(cnt==3) return 0;
	if(cnt>3 || i>=n) return inf;

	if(dp[i][cnt]!=-1) return dp[i][cnt];

	int ans = 0;

	if(prev < a[i]){
		int ans1 = solve(i+1,cnt,prev);
		int ans2 = c[i] + solve(i+1,cnt+1,a[i]);
		ans += min(ans1,ans2);
	}
	else
		return solve(i+1,cnt,prev);

	return dp[i][cnt] = ans;
}

int solve(){
	int mn = inf;

	fo(i,n){
		int b = -1;
		int sum = c[i];

		for(int j=0;j<i;j++){
			if(a[j] >= a[i]) continue;
			if(b==-1 || c[b] > c[j]) b = j;
		}
		if(b==-1) continue;
		sum += c[b];
		b=-1;
		for(int j=i+1;j<n;j++){
			if(a[j]<=a[i]) continue;
			if(b==-1 || c[b] > c[j]) b = j;
		}
		if(b==-1) continue;
		sum += c[b];
		mn = min(mn,sum);
	}
	return mn;
}

int32_t main(){
	NINJA;

	cin >> n;
	fo(i,n) cin >> a[i];
	fo(i,n) cin >> c[i];

	fo(i,mxn) fo(j,3) dp[i][j] = -1;

	// int ans = solve(0,0,0);

	// if(ans==inf) cout << -1 << endl;
	// else cout << ans << endl;	
	// return 0;
	int ans = solve();
	if(ans == inf) cout << -1 << endl;
	else cout << ans << endl;
}

