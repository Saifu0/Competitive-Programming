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

	int n,m; cin >> n >> m;
	vector<vi> a(n);

	fo(i,n){
		fo(j,m){
			int x; cin >>x;
			a[i].pb(x);
		}
	}

	fo(i,n){
		sort(a[i].begin(),a[i].end());
	}

	int mn = inf;

	fo(i,n-1){
		fo(j,m){
			// auto idx = upper_bound(a[i+1].begin(), a[i+1].end(),a[i][j]);
			// if(idx != a[i+1].end()){
			// 	idx--;
			// 	mn = min(mn,abs(a[i+1][*idx]-a[i][j]));
			// }

			int key = a[i][j];

			int l = 0, r = m-1;
			int idx = inf;
			while(l<=r){
				int m = (l+r)/2;
				if(a[i+1][m]>=key){
					idx = min(idx,abs(a[i+1][m]-a[i][j]));
					r = m-1;
				}else{
					l = m+1;
				}
			}
			mn = min(mn,idx);

		}
	}

	cout << mn << endl;
	
	return 0;
}