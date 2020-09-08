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

int C(int n, int r){
	if(n<=2) return 0;
	if(r==3){
		int temp = n*(n-1);
		temp /= 2;
		temp *= (n-2);
		temp /=3;
		return temp;
	}
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int cnt = 0;
		fo(i,n){
			int x; cin >> x;
			if(x==k) cnt++;
		}

		int deno = C(n,3);
		int num = C(cnt,3);

		int div = __gcd(deno,num);

		deno /= div;
		num /= div;

		cout << num << "/" << deno << endl;

		
	}
	
	return 0;
}