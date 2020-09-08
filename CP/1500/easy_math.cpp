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

const int mxn = 

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a,b; cin >> a >> b;
		int c = a + 2*b;
		int d = a + 3*b;
		int e = a + 4*b;
		int f = a + b;

		int cnt =0 ;


		for(int i=n;i<=m;i++){
			if(i%a==0){
				for(int j=i;j<=m;j+=a) cnt++;
				break;
			}
		}

		for(int i=n;i<=m;i++){
			if(i%c==0){
				for(int j=i;j<=m;j+=c) cnt++;
				break;

			}
		}
		for(int i=n;i<=m;i++){
			if(i%d==0){
				for(int j=i;j<=m;j+=d) cnt++;
				break;

			}
		}
		for(int i=n;i<=m;i++){
			if(i%e==0){
				for(int j=i;j<=m;j+=e) cnt++;
				break;

			}
		}
		for(int i=n;i<=m;i++){
			if(i%f==0){
				for(int j=i;j<=m;j+=f) cnt++;
				break;
			}
		}


		cout << (m-n+1) - cnt << endl;
	}
	
	return 0;
}