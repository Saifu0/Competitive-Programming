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

const int mxn = 2e5+10;
int a[mxn];
int vis[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	int start = 1;
	while(t--){
		int ans = 0;

		int n; cin >> n;

		fo(i,n) cin >> a[i], vis[i] = 0;
		
		int mx = -inf;
		fo(i,n){
			if((a[i] > mx)&&(i==n-1 || a[i] > a[i+1])){
				ans++;
			}
			mx = max(mx,a[i]);
		}
		

		cout << "Case #" << start++ << ": " << ans << endl;
	}
	
	return 0;
}

// for(int i=1;i<n;i++){
// 			if(a[i] < a[i-1]){
// 				bool ok = 1;

// 				for(int j=i-2;j>=0;j--){
// 					ok = ok&&(a[i-1] > a[j]);
// 				}
// 				if(ok) ans++;
// 			}
			
// 		}