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

unsigned int solve(unsigned int a, unsigned int n, unsigned int p){
	unsigned int res=1;
	while(n){
		if(n&1) res = (res*a)%p;
		a = (a*a)%p;
		n>>=1;
	}
	return res;
}

int32_t main(){
	NINJA;

	unsigned int t; cin >> t;
	while(t--){
		unsigned int a,b,n; cin >> a >> b >> n;

		cout << solve(a,solve(b,n,mod-1),mod) << endl;
	}
	
	return 0;
}