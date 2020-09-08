// #include<bits/stdc++.h>
// using namespace std;

// #define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,k,n) for(int i=k;i<n;i++)
// #define iii tuple<int,int,int>
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define int long long
// #define pb push_back
// #define endl "\n"
// #define setbits __builtin_popcountll
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007
// #define inf (int)1e18

// const int mxn = 1e6+50;
// int store[mxn];

// void sieve(){
// 	int k=0;
// 	bool prime[mxn];
// 	memset(prime,true,sizeof prime);
// 	for(int i=2;i*i<=mxn;i++){
// 		if(prime[i]){
// 			store[k++] = i;
// 			for(int j=i+i;j<=mxn;j+=i) prime[j] = 0;
// 		}
// 	}
// }

// int solve(int n){
// 	int tot = 1;
// 	int i=0;
// 	while(n){
// 		int cnt = 0;
// 		while(n%store[i]==0 && n!=0){
// 			n /= store[i];
// 			cnt++;
// 		}
// 		tot = tot*(cnt+1);
// 		i++;
// 	}
// 	return tot;
// }

// int32_t main(){
// 	NINJA;
// 	//vi s;
// 	sieve();

// 	int t; cin >> t;
// 	while(t--){
// 		int n; cin >> n;
		
// 		cout << solve(n) << endl;
// 	}
	
// 	return 0;
// }

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

const int mxn = 1e6+10;
int a[mxn];

int32_t main(){
	NINJA;

	for(int i=1;i<mxn;i++){
		for(int j=i;j<mxn;j+=i) a[j]++;
	}

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << a[n] << endl;
	}
	
	return 0;
}