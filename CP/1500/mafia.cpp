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

int32_t main(){
	NINJA;

	int n; cin >> n;
	int a[n+5];

	fo(i,n) cin >> a[i];

	int l=0,r=1e10;

	while(r-l > 1){
		int m = (l+r)/2;
		int ok = 1;
		int sum = 0;
		fo(i,n){
			if(a[i]>m){
				ok = 0;
				break;
			}
			sum += m - a[i];
		}

		if(ok && sum >=m){
			r = m;
		}else{
			l = m;
		}
	}

	cout << r << endl;
	
	return 0;
}