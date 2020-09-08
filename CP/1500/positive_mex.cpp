#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 998244353

int power[100005];

int32_t main(){
	NINJA;
	power[0] = 1;
    for(int i = 1; i < 100005; i++){
        power[i] = (2*power[i-1])%mod;
    }
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		mp m;
		fo(i,n){
			int x; cin >> x;
			m[x]++;
		}
		
		int add=0,mul=1,tot=0,mex;
		
		
		for(int i=1;i<=n+1;i++){
			mex = (i*mul)%mod;
			add = (add + m[i])%mod;
			mex = (mex*power[n-add])%mod;
			tot = (tot+mex)%mod;
			mul = (mul*(power[m[i]]-1))%mod;
		}
		
		cout << tot << endl;
	}
	

	return 0;
}

