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

string a[10];
int n,m,k;
vector<vector<int>> aa,bb;



int32_t main(){
	NINJA;

	cin >> n >> m >> k;
	fo(i,n) cin >> a[i];

	int cnt = 0;
	fo(i,n){
		fo(j,m){
			cnt += (a[i][j] == '#' ? 1 : 0);
		}
	}

	// if(cnt == k){
	// 	cout << 1 << endl;
	// 	return 0;
	// }
	
	for(int i=0;i<(1<<n);i++){
		vi b;
		for(int j=0;j<n;j++){
			if((1ll<<j)&i) b.pb(j);
		}
		aa.pb(b);
	}

	for(int i=0;i<(1<<m);i++){
		vi b;
		for(int j=0;j<m;j++){
			if((1ll<<j)&i) b.pb(j);
		}
		bb.pb(b);
	}

	// for(auto i : bb){
	// 	for(auto j : i){
	// 		cout << j << " ";
	// 	}
	// 	cout << endl;
	// }

	int temp[n][m];
	fo(x,n){
		fo(y,m) temp[x][y] = a[x][y];
	}

	int ans = 0;
	for(auto i : aa){

		fo(x,n){
			fo(y,m) a[x][y] = temp[x][y];
		}
		
		int cnt = 0;
		fo(r,sz(i)){
			for(int l=0;l<m;l++){
				a[i[r]][l] = '.';
			}
		}
		int zz[n][m];
		fo(x,n){
			fo(y,m) zz[x][y] = a[x][y];
		}
		int xxx = cnt;
		for(auto j : bb){
			cnt = xxx;
			fo(r,sz(j)){
				for(int l=0;l<n;l++){
					a[l][j[r]] = '.';
				}
			}
			fo(x,n){
				fo(y,m) cnt += (a[x][y] =='#' ? 1 : 0);
			}
			fo(x,n){
				fo(y,m) a[x][y] = zz[x][y];
			}
			// cout << cnt << endl;
			if(cnt == k) ans++;
		}

	}

	cout << ans << endl;
	
	return 0;
}