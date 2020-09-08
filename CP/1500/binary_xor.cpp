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

const int mxn  =100001;

int fact[100001];


int power(int a, int n){
	int res = 1;
	while(n){
		if(n&1) res = (res*a)%mod;
		n>>=1;
		a = (a*a)%mod;
	}
	return res;
}

void init(){
	fact[0] = 1;
	Fo(i,1,mxn) fact[i] = (fact[i-1]*i)%mod;
}

int32_t main(){
	NINJA;

	init();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string a,b; cin >> a >> b;

		int sa = 0, sb=0;
		fo(i,n) sa += a[i]-'0';
		fo(i,n) sb += b[i]-'0';
		
		int l = abs(sa-sb);
		int r = sa+sb-2*max((sa+sb-n),0ll);

		int ans = 0;
		for(int i=r;i>=l;i-=2){
			int temp = ( power(fact[i],mod-2)*fact[n])%mod;
			temp = (temp*power(fact[n-i],mod-2))%mod;

			ans = (ans+temp)%mod;
		}
		cout << ans << endl;
	}
	
	return 0;
}