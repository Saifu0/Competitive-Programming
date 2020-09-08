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

int dp[12][12];
int x[12],y[12];
int dir[12][12];

int solve(int from, int to){
	if(from==to) return 0;
	int&ans = dp[from][to];
	if(ans!=-1) return ans;
	ans = inf;
	Fo(i,from,to){
		int best = solve(from,i) + solve(i+1,to) + x[from]*y[i]*y[to];
		if(ans > best){
			ans = best;
			dir[from][to] = i;
		}
	}
	return ans;
}

void print(int from, int to){
	if(from==to) printf("A%d",from);
	else{
		printf("(");
		print(from,dir[from][to]);
		printf(" x ");
		print(dir[from][to]+1,to);
		printf(")");
	}
}

int32_t main(){
	NINJA;

	int st=1;
	while(1){
		int n; cin >> n;
		if(n==0) break;
		memset(dp,-1,sizeof(dp));
		for1(i,n) cin >> x[i] >> y[i];
		solve(1,n);
		printf("Case %d: ",st++);
		print(1,n);
		printf("\n");
	}
	
	return 0;
}