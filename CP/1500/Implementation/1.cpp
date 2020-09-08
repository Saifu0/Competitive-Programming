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

int32_t main(){
	NINJA;

	int f1,f2; cin >> f1 >> f2;
	int n; cin >> n;
	n--;
	n = n%6;
	n++;
	// cout << n << endl;

	if(n==1){
		cout << (f1%mod + mod)%mod << endl;
	}else if(n==2){
		cout << (f2%mod + mod)%mod << endl;
	}else if(n==3){
		cout << ((f2-f1)%mod + mod)%mod << endl;
	}else if(n==4){
		cout << ((-1*f1)%mod + mod)%mod << endl;
	}else if(n==5){
		cout << ((-1*f2)%mod + mod)%mod << endl;
	}else{
		cout << ((f1 - f2)%mod + mod)%mod << endl;
	}
	
	return 0;
}