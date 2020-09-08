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

const int mxn = 1010;
int a[mxn][mxn];
int pref[mxn][mxn];

int32_t main(){
	NINJA;

	int n,m; cin >> n >> m;
	for1(i,n){
		for1(j,n){
			char c; cin >> c;
			a[i][j] = (c=='*' ? 1 : 0);
		}
	}

	for1(i,n){
		for1(j,n){
			pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + a[i][j];
		}
	}

	while(m--){
		int r,c,R,C;
		cin >> r >> c >> R >> C;
		cout << pref[R][C] - pref[r-1][C] + pref[r-1][c-1] - pref[R][c-1] << endl;
	}

	
	return 0;
}