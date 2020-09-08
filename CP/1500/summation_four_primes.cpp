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
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 10000000+5;
bool prime[mxn];
set<int> ss;

void sieve(){
	fo(i,mxn) prime[i] = 1;
	for(int i=2;i*i<=mxn;i++){
		if(prime[i]){
			for(int j=i*i;j<mxn;j+=i) prime[j] = 0;
		}
	}
}

void goldbach(int n){
	for(int i=2;;i++){
		if(prime[i] && prime[n-i]){
			cout << i << " " << n-i << endl;
			return;
		}
	}
}

int32_t main(){
	NINJA;

	sieve();

	int n;
	while(scanf("%lld",&n)==1){
		if(n<=7){
			cout << "Impossible." << endl;
			continue;
		}

		if(n%2==0){
			n -= 4;

			cout << 2 << " " << 2 << " " ;
		}else{
			n -= 5;
			cout << 2 << " " << 3 << " " ;
		}
		// cout << n << endl;
		goldbach(n);
	}
	
	return 0;
} 