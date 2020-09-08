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

const int mxn = 55;
bool mat[mxn][mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	int _ = 1;
	while(t--){
		memset(mat,false,sizeof(mat));
		int n; cin >> n;
		string a,b; cin >> a >> b;
		fo(i,n) mat[i][i] = 1;
		fo(i,n-1){
			if(a[i]=='Y' and b[i+1]=='Y') mat[i+1][i] = 1;
			if(a[i+1]=='Y' and b[i]=='Y') mat[i][i+1] = 1;
		}
		fo(k,n){
			fo(i,n){
				fo(j,n){
					mat[i][j] |= (mat[i][k] & mat[k][j]);
				}
			}
		}
		cout << "Case #" << _++ << ":" << endl;
		fo(i,n){
			fo(j,n){
				cout << (mat[i][j] ? 'Y' : 'N');
			}
			cout << endl;
		}
	}
	
	return 0;
}