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

const int mxn = 1e5+10;
int a[mxn];
int b[mxn];

int modInverse(int a, int n){
	int res = 1;
	while(n){
		if(n&1) res = (res*a)%mod;
		n >>= 1;
		a = (a*a)%mod;
	}
	return res;
}

int32_t main(){
	NINJA;

	int n; cin >> n;
	int res = 1;

	fo(i,n) cin >> a[i+1], res = (res*a[i+1])%mod;



	int q; cin >> q;
	while(q--){
		int t; cin >> t;
		if(t==0){
			int id,val; cin >> id >> val;
			int temp = a[id];
			a[id] = val;
			res = (res*val*modInverse(temp,mod-2))%mod;
			//res = (res)%mod;
		}else{
			int id;
			cin >> id;
			int ans = (res*modInverse(a[id],mod-2))%mod;
			cout << ans << endl;
		}
	}

	//fo(i,n) cout << b[i+1] << " ";
	
	return 0;
}