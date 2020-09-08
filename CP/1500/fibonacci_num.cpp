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

void multiply(int F[2][2], int M[2][2]){
	int x =  (F[0][0]*M[0][0] + F[0][1]*M[1][0])%mod; 
	int y =  (F[0][0]*M[0][1] + F[0][1]*M[1][1])%mod; 
	int z =  (F[1][0]*M[0][0] + F[1][1]*M[1][0])%mod; 
	int w =  (F[1][0]*M[0][1] + F[1][1]*M[1][1])%mod; 

	F[0][0] = x; 
	F[0][1] = y; 
	F[1][0] = z; 
	F[1][1] = w; 
}


void power(int f[2][2], int n){
	if(n==0 || n==1) return;
	int m[2][2] = {{1,1},{1,0}};

	power(f,n/2);
	multiply(f,f);
	if(n&1) multiply(f,m);
}

int fib(int n){
	int f[2][2] = {{1,1},{1,0}};
	if(n==0) return 0;
	power(f,n-1);
	return f[0][0];
}




int32_t main(){
	NINJA;

	int n; cin >> n;

	cout << fib(n) << endl;
	
	return 0;
}