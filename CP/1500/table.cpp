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

const int mxn = 55;
int mat[mxn][mxn];
int n,m;

int32_t main(){
	NINJA;
	cin >> n >> m;

	fo(i,n) fo(j,m) cin >> mat[i][j];

	bool ok=0;
	fo(i,n)
		if(mat[i][0]==1 || mat[i][m-1]){
			cout << 2 << endl;
			return 0;
		}

	fo(i,m){
		if(mat[0][i]==1 || mat[n-1][i]){
			cout << 2 << endl;
			return 0;
		}
	}

	cout << 4 << endl;

	
	return 0;
}