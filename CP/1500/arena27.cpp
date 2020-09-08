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

	int x; cin >> x;

	vi a;
	// for(int i=1;i*i<=x;i++){
	// 	if(x%i==0){
	// 		if(x/i==i) 	a.pb(i);
	// 		else{
	// 			a.pb(i);
	// 			a.pb(x/i);
	// 		}
	// 	}
	// }

	for(int i=9;i>1;i--){
		while(x%i==0){
			x /= i;
			a.pb(i);
		}
	}

	int p = 1;
	int ans = 0;
	for(int i=sz(a)-1;i>=0;i--){
		ans = (ans*10 + a[i])%mod;
	}

	cout << ans << endl;

	
	return 0;
}