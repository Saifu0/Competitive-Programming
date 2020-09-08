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

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vi a;
		int mul = 1;
		fo(i,n){
			int x; cin >> x;
			mul = (mul *x + mod)%mod;
		}

		// cout << mul << endl;
		for(int i=1;i*i<=mul;i++){
			if(mul%i==0){
				if(mul/i==i) a.pb(i);
				else{
					a.pb(i);
					a.pb(mul/i);
				}
			}
		}

		// for(int i: a) cout << i << " ";

		int ans = 0;
		fo(i,sz(a)){
			int x = a[i];
			int sum = 0;
			for(int j=1;j*j<=x;j++){
				if(x%j==0){
					if(x/j==j) sum += j;
					else{
						sum += j;
						sum += x/j;
					}
				}
			}
			// cout << sum << " ";
			ans = (ans + sum + mod)%mod;
		}

		cout << ans << endl;

	}
	
	return 0;
}