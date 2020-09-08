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
#define ld long double
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
		int n,m; cin >> n >> m;
		int a[n][m];
		fo(i,n) fo(j,m) cin >> a[i][j];
		bool ok = 0;
		fo(i,n){
			fo(j,m){
				int limit = 0;
				if(i >0) limit++;
				if(i < n-1) limit++;
				if(j>0) limit++;
				if(j<m-1) limit++;
				if(a[i][j] > limit){
					ok = 1;
					break;
				}
			}
			if(ok) break;
		}
		if(ok) cout << "NO" << endl;
		else{
			cout << "YES" << endl;
			fo(i,n){
				fo(j,m){
					int limit = 0;
					if(i >0) limit++;
					if(i < n-1) limit++;
					if(j>0) limit++;
					if(j<m-1) limit++;
					cout << limit << " ";
				}
				cout << endl;
			}
		}

	}
	
	return 0;
}