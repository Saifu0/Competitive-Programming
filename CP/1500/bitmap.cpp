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

const int mxn = 183;

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		string a[mxn];
		int ans[mxn][mxn];
		
		fo(i,mxn) fo(j,mxn) ans[i][j] = inf;

		int n,m; cin >> n >> m;
		fo(i,n) cin >> a[i];
		fo(i,n){
			fo(j,m){
				if(a[i][j]=='1'){
					fo(k,n){
						fo(l,m){
							if(a[k][l]=='0'){
								ans[k][l] = min(ans[k][l],abs(i-k)+abs(j-l));
							}
						}
					}
				}
			}
		}
		fo(i,n){
			fo(j,m){
				cout << (ans[i][j] == inf ? 0 : ans[i][j] ) << " "; 
			}
			cout << endl;
		}
	}
	
	return 0;
}