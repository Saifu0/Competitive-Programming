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

const int mxn = 510;
char mat[mxn][mxn];
int row[mxn][mxn],col[mxn][mxn];
int n,m;

int32_t main(){
	NINJA;
	
	cin >> n >> m;
	fo(i,n) fo(j,m) cin >> mat[i][j];
	fo(i,n){
		for1(j,m-1){
			if(mat[i][j-1]==mat[i][j] and mat[i][j]!='#'){
				row[i][j] = row[i][j-1] + 1;
			}else{
				row[i][j] = row[i][j-1];
			}
		}
	}

	fo(j,m){
		for1(i,n-1){
			if(mat[i-1][j]==mat[i][j] and mat[i][j]!='#'){
				col[i][j] = col[i-1][j] + 1;
			}else{
				col[i][j] = col[i-1][j];
			}
		}
	}
	// fo(i,n){
	// 	fo(j,m){
	// 		cout << row[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// cout << endl;
	// fo(i,n){
	// 	fo(j,m){
	// 		cout << col[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// cout << endl;
	int q; cin >> q;
	while(q--){
		int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
		int sum = 0;
		--x1,--y1,--x2,--y2;
		for(int i=x1;i<=x2;i++){
			sum += row[i][y2] - (y1==0 ? 0 : row[i][y1-1]);
			if(y1>0 and mat[i][y1-1]=='.' and mat[i][y1]=='.') sum -= 1;
		}
		for(int i=y1;i<=y2;i++){
			sum += col[x2][i] - (x1==0 ? 0 : col[x1-1][i]);
			if(x1>0 and mat[x1-1][i]=='.' and mat[x1][i]=='.') sum -=1;
		}
		cout << sum << endl;
	}

	return 0;
}