//----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

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

const int mxn = 123;
char a[mxn][mxn];

int32_t main(){
	NINJA;

	int n,k; cin >> n >> k;

	int cnt =0 ;

	bool f = 0;
	fo(i,n){
		fo(j,n){
			if((i%2)==(j%2) && f == 0 && cnt < k){
				a[i][j] = 'L';
				cnt++;
			}else a[i][j] = 'S';
			if(cnt==k){
				f = 1;
			}
		}
	}

	if(cnt < k) cout << "NO" << endl;
	else{
		cout << "YES" << endl;
		fo(i,n){
			fo(j,n){
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	
	return 0;
}