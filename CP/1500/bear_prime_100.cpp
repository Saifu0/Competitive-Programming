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

const int mxn = 100;

bool isPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

bool isDivisble(int n){
	printf("%d\n",n);
	fflush(stdout);
	char s[10];
	scanf("%s",s);
	return (s[0] == 'y' || s[0] == 'Y');
}

int32_t main(){
	NINJA;
	
	int cnt = 0;
	for(int a=2;a<=mxn/2 && cnt < 2;a++){
		if(isPrime(a)){
			if(isDivisble(a)){
				cnt++;
				if(a*a<=mxn && isDivisble(a*a)) cnt++;
			}
		}
	}

	cout << (cnt >= 2 ? "composite" : "prime" ) << endl;


	return 0;
}