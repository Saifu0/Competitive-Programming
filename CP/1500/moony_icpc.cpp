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

const int mxn = 1e5+500;
int a[mxn],b[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		fo(i,n) cin >> a[i];

		fo(i,n){
			b[i] = a[i] + a[i+1] + a[i+2];
			if(n-2==0) b[i] = a[i+1] + a[i] + a[0];
			if(n-1==0) b[i] = a[i] + a[0] + a[1];
		}

		sort(b,b+n);

		cout << b[n-1] << endl;
	}
	
	return 0;
}