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

int solve(int n){
	for(int i=3;i<=n;i++){
		if(n%i==0) return i;
	}
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		if(n%2==0){
			cout << n + 2*k << endl;
			continue;
		}else{
			int x = solve(n);
			cout << n + 2*(k-1) + x << endl;
		}
	}
	
	return 0;
}