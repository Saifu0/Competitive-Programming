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

const int mxn = 5010;
const int N = 1e5+10;
int a[mxn][mxn];
int t[N],idx[N];
int x[N];
bool vis[5	][mxn];


int32_t main(){
	NINJA;

	int n,m,k; cin >> n >> m >> k;
	for1(i,k) cin >> t[i] >> idx[i] >> x[i];

	for(int i=k;i>=1;i--){
		if(vis[t[i]][idx[i]]) continue;
		vis[t[i]][idx[i]] = 1;
		if(t[i]==1){
			for(int j=1;j<=m;j++) if(a[idx[i]][j]==0) a[idx[i]][j] = x[i];
		}else{
			for(int j=1;j<=n;j++) if(a[j][idx[i]]==0) a[j][idx[i]] = x[i];	
		}
	}

	for1(i,n){
		for1(j,m){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}