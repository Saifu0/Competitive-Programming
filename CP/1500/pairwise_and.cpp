#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

ll expo(ll base,ll exponent){
    ll ans=1;
    while(exponent!=0){
        if(exponent&1) ans=(1LL*ans*base)%mod;
        base=(1LL*base*base)%mod;
        exponent>>=1;
    }
    return ans%mod;
}

int main(){
	NINJA;
	int n; cin >> n;
	int a[n];
	fo(i,n) cin >> a[i];

	ll ans = 0;

	vi cnt(32,0);

	for(int i=0;i<=31;i++){
		int k=0;
		fo(j,n){
			if((a[j]&(1<<i))) cnt[i]++;
		}
	}


	fo(i,32){
		ans += (ll)(cnt[i]*(cnt[i]-1))/2 *expo(2,i);
	}
	cout << ans << endl;

	return 0;
}