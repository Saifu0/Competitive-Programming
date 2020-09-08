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



int32_t main(){
	NINJA;

	int a[101][101];
	int n,m; cin >> n >> m;
	int mat[n][m];
	fo(i,n) fo(j,m) cin >> mat[i][j], a[i][j] = 1;

	bool ok = 1;
	fo(i,n){
		fo(j,m){
			if(mat[i][j]==0){
				fo(k,n) a[k][j] = 0;
				fo(k,m) a[i][k] = 0;
			}
		}
 	}

 	fo(i,n){
 		fo(j,m){
 			bool ans = 0;
 			fo(k,n) ans |= a[k][j];
 			fo(k,m) ans |= a[i][k];
 			if(ans!=mat[i][j]){
 				ok = 0;
 				break;
 			}
 		}
 		if(!ok) break;
 	}

 	if(!ok){
 		cout << "NO" << endl;
 		return 0;
 	}
 	cout << "YES" << endl;
 	fo(i,n){
 		fo(j,m){
 			cout << a[i][j] << " ";
 		}
 		cout << endl;
 	}
	
	return 0;
}