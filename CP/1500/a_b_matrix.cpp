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

int mat[55][55];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,m,a,b;
		cin >> n >> m >> a >> b;

		fo(i,n) fo(j,m) mat[i][j]= 0;

		if(n*a != m*b){
			cout << "NO" << endl;
			continue;
		}

		int shift;
		for(shift=1;shift<m;shift++){
			if(shift*n % m==0){
				break;
			}
		}

		for(int i=0,dx=0;i<n;i++,dx+=shift){
			fo(j,a){
				mat[i][(j+dx)%m] = 1;
			}
		}

		cout << "YES" << endl;
		fo(i,n){
			fo(j,m){
				cout << mat[i][j];
			}
			cout << endl;
		}
	}
	
	return 0;
}