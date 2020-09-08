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

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vi a(n);
		fo(i,n) cin >> a[i];	
		
		int mx_gcd =1;

		fo(i,n-1){
			int x = __gcd(a[i],a[i+1]);
			mx_gcd = max(mx_gcd,x);
		}

		int mx = 0;
		int cnt = 0;

		fo(i,n){
			if((a[i]%mx_gcd)==0) cnt++;
			else{
			 	mx = max(mx,cnt);
			 	cnt=0;
			}
		}

		mx = max(mx,cnt);


		cout << mx_gcd << " " << mx << endl;

	}
	
	return 0;
}