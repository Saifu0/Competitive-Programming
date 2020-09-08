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

bool cmp(ii x, ii y){
	return x.F > y.F;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;

		int a[n+5];
		
		ii b[n+5];

		fo(i,n) cin >> a[i];

		sort(a,a+n);

		fo(i,n) cin >>  b[i].F, b[i].S = b[i].F;

		sort(b,b+n,cmp);

		fo(i,n){
			b[i].F = b[i].F - a[i];
		}

		sort(b,b+n,cmp);

		int sum = 0;
		fo(i,n){
			if(k && a[i]<b[i].S){
				sum += b[i].S;
				k--;
				continue;
			}
			sum += a[i];
		}

		cout << sum << endl;
	}
	
	return 0;
}