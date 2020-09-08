// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
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

bool isprime(int n){
	if(n<2) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

bool solve(){
	int n; cin >> n;
	if(n==1) return false;
	if(n&1) return true;
	int k = 0;
	while(n%2==0){
		n/=2;
		k++;
	}
	if(n==1) return k==1;
	return k!=1 || !isprime(n);
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		if(solve()){
			cout << "Ashishgup" << endl;
		}else{
			cout << "FastestFinger" << endl;
		}
	}
	
	return 0;
}