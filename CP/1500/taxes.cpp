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

bool isprime(int n){
	//bool f = 1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int32_t main(){
	NINJA;

	int n; cin >> n;
	if(isprime(n)) cout << '1' << endl;
	else if(n%2==0) cout << 2 << endl;
	else if(isprime(n-2)) cout  << 2 << endl;
	else cout << 3 << endl;
	
	return 0;
}