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
#define iiii pair<int,int>
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

const int mxn = 15;
int a[mxn][mxn];

int32_t main(){
	NINJA;
	freopen("cowtip.in", "rt", stdin);
	freopen("cowtip.out", "wt", stdout);
	int n; cin >> n;
	for1(i,n){
		string s; cin >> s;
		fo(j,n){
			a[i][j+1] = s[j]-'0';
		}
	}
	int cnt = 0;
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			if(a[i][j]==1){
				cnt++;
				for(int ii=1;ii<=i;ii++){
					for(int jj=1;jj<=j;jj++){
						a[ii][jj] = !a[ii][jj];
					}
				}
			}
		}
	}
	cout << cnt << endl;
	
	return 0;
}