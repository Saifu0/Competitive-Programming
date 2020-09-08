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

const int mxn = 30001;
int dp[mxn][500];
bool vis[mxn][500];
int n,m;
int a[mxn];
mp cnt;

int solve(int i, int j){
	int jj = j-(m-250);
	if(i>=mxn) return 0;

	if(vis[i][jj]) return dp[i][jj];
	vis[i][jj] = true;

	int ans;
	if(j==1){
		ans = cnt[i] + max({solve(i+j+1,j+1), solve(i+j,j)});
	}else{
		ans = cnt[i] + max({solve(i+j+1,j+1),solve(i+j-1,j-1),solve(i+j,j)});
	}

	dp[i][jj] = ans;
	return ans;
}

int main(){
	NINJA;
	cin >> n >> m;
	fo(i,n){
		cin >> a[i];
		cnt[a[i]]++;
	}

	cout << solve(m,m) << endl;

	return 0;
}