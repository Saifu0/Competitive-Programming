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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn= 1e7+10;
int min_prime[mxn];
int max_prime[mxn];

void sieve(){
	for(int i=2;i<mxn;i++){
		if(min_prime[i]>0) continue;
		min_prime[i] = i;
		max_prime[i] = i;

		int j = i+i;
		for(int j=2*i;j<mxn;j+=i){
			if(min_prime[j]==0) min_prime[j] = i;
			max_prime[j] = i;
		}
	}
}

int solve(int x, int a, int b, int c){
	int min_cost = c + x;
	int n = max_prime[x];
	if(n!=x){
		int cost = a;
		cost += x/n;
		min_cost = min(min_cost,cost);
	}

	int m = min_prime[x];
	n = x/m;
	if(n!=min_prime[n] && n!=1){
		int cost = m + b;
		min_cost = min(min_cost,cost);
	}
	return min_cost;
}

int32_t main(){
	NINJA;
	sieve();

	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		int a,b,c; cin >> a >> b >> c;
		cout << solve(x,a,b,c) << endl;
	}
	
	return 0;
}