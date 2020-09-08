// #include<bits/stdc++.h>
// using namespace std;

// #define deb(x) cout << #x << " " << x << endl;
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,k,n) for(int i=k;i<n;i++)
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define ll long long
// #define pb push_back
// #define endl "\n"
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007
// #define mxN (int)2e5

// ll power(ll a, ll b)	//a is base, b is exponent
// {
// 	if(b==0)
// 		return 1;
// 	if(b==1)
// 		return a;
// 	if(b%2 == 1)
// 		return (power(a,b-1)*a)%mod;
// 	ll q = power(a,b/2);
// 	return (q*q)%mod;
// }


// void ninja(){
// 	ll n; cin >> n;
// 	vector<ll> arr(n),brr(n);
// 	fo(i,n) cin >> arr[i],brr[i] = arr[i];
// 	sort(brr.begin(), brr.end());
// 	int j = 0;
// 	map<ll,ll> m;
// 	for(int i=n-1;i>=0;i--){
// 		m[arr[j]] += (power(2,i) - (lower_bound(brr.begin(), brr.end(),arr[j])-brr.begin()+1));
// 		j++;
// 	}
// 	for(auto i : m) cout << i.F << " " << i.S << endl;

// 	cout << endl;
// }

// int main(){
	
// 	int t; cin >> t;
// 	while(t--){
// 		ninja();
// 	}

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

#define M 1000000007
#define int long long

int go(int a, int n){
	// cout << a << " ";
	int res = 1;
	while(n){
		if(n&1) res = (res*a)%M;
		// cout <<"Before " << a << " ";
		a = (a*a)%M;
		// cout << "After " << a << " ";
		n/=2;
	}
	return res;
}


int32_t main(){
	int _; cin >> _;
	while(_--){
		int n; cin >> n;
		for (int i = 0; i < n; ++i)
		{
			int x; cin >> x;
		}
		for(int i=n-1;i>=0;i--){
			cout << go(2,i) << " ";
		}
		cout << "\n";
	}
}