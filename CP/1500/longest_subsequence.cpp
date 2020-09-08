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

const int mxn = 10000+10;
int lis[mxn],lds[mxn];

int32_t main(){
	NINJA;
	int n;
	while(scanf("%d",&n)){
		
		vi a(n);
		fo(i,n) cin >> a[i];

		fo(i,n) lis[i] = lds[i] = 1;

		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i] > a[j] && lis[i] < lis[j]+1) lis[i] = lis[j] + 1;
			}
		}

		for(int i=n-2;i>=0;i--){
			for(int j=n-1;j>i;j--){
				if(a[i] > a[j] && lds[i] < lds[j]+1) lds[i] = lds[j] + 1;
			}
		}

		int mx = -inf;

		fo(i,n){
			mx = max(mx,lis[i]+lds[i]-1);
		}
		cout << mx << endl;
		
	}
	
	return 0;
}