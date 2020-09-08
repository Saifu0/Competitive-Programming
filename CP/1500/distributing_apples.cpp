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

	// int t; cin >> t;
	// while(t--){
	int a,b; cin >> a >> b;

	a = a+b-1;

	int f = 1,g=1,h=1;

	for(int i=1;i<=a;i++){
		if(i==(a-b)) h = (f*i)%mod;
		if(i==b) g = (f*i)%mod;
		f = (f*i)%mod;
	}

	int temp = (power(g,mod-2)*f)%mod;
	temp = (temp*power(h,mod-2))%mod;

	cout << temp << endl;
	//}
	
	return 0;
}