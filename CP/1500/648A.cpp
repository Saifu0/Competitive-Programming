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

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		bool ok = false;

		int mat[n+5][m+5];

		int cnt = 0;
		fo(i,n){
			fo(j,m){
				cin >> mat[i][j];
			}
		}

		fo(i,n){
			bool f = true;
			bool g = false;
			int idx1 ,idx2;
			fo(j,m){
				f = f && (mat[i][j]==0);
				bool l = true;
				fo(k,n){
					l = l&&(mat[k][j]==0);
				}
				if(l){
					g = true;
					idx2 = j;
				}
			}
			if(g==true&&f==true){
				cnt++;
				mat[i][idx2] = 1;
			}
		}

		if(cnt%2==0) cout << "Vivek" << endl;
		else cout << "Ashish" << endl;
	}
	
	return 0;
}