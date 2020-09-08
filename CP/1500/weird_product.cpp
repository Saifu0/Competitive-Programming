#include<bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 998244353

const int N = 1e5+10;
int a[N];
int pref[N];
int pref2[N];

int power(int x, int n){
	int ans = 1;
	while(n){
		if(n%2==1) ans = (ans*x)%MOD;
		n /= 2;
		x = (x*x)%MOD;
	}
	return ans;
}

int W(int l){
	
}

int32_t main(){
	int _;
	cin >> _;
	while(_){
		int n,x;
		cin >> n >> x;
		for(int i=1;i<=n;i++) cin >> a[i];
		int base = 0;
		for(int i=1;i<=n;i++) pref[i] = (power(x,base++))%MOD;
		for(int i=1;i<=n;i++) pref[i] += pref[i-1];

		for(int i=1;i<=n;i++) pref2[i] = pref2[i-1] + a[i];

		int sum = 0;
		for(int i=1;i<=n;i++){
			sum = (sum + (W(i)%MOD)*(W(i)%MOD))%MOD;
		}
		cout << sum << endl;
	}
}