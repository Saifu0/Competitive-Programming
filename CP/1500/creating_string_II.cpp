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

const int mxn = 1e6+10;
int fact[mxn];

int power(int x, int n){
	int res = 1;
	while(n){
		if(n&1) res = (res*x)%mod;
		n >>= 1;
		x = (x*x)%mod;
	}
	return res;
}

int32_t main(){
	NINJA;

	string s; cin >> s;
	int n = sz(s);

	unordered_map<char,int> m;
	for(char ch: s){
		m[ch]++;
	}

	fact[0] = 1;

	Fo(i,1,n+1) fact[i] = (fact[i-1]*i)%mod;

	int r = 1;
	for(auto it : m){
		r = (r*fact[it.S])%mod;
	}

	

	int ans = (fact[n]*power(r,mod-2))%mod;

	cout << ans << endl; 
	
	return 0;
}