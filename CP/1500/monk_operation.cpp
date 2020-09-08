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

const int mxn = 1010;
int n,m;
int g[mxn][mxn];
int a,b,c,d;

int32_t main(){
	NINJA;

	cin >> n >> m;
	fo(i,n) fo(j,m) cin >> g[i][j];

	cin >> a >> b >> c >> d;

	int ans1 = 0;	

	fo(i,n){
		int mx1 = 0, mx2 = 0,mx3 = 0;
		fo(j,m){
			mx3 += abs(g[i][j]);
			mx1 += abs(g[i][j] + a);
			mx2 += abs(b);
		}
		ans1 += max(mx1,max(mx2,mx3));
	}

	int ans2 = 0;

	fo(i,m){
		int mx1 = 0, mx2 = 0,mx3 = 0;
		fo(j,n){
			mx3 += abs(g[j][i]);
			mx1 += abs(g[j][i] + c);
			mx2 += abs(d);
		}
		ans2 += max(mx1,max(mx2,mx3));
	}

	cout << max(ans1,ans2) << endl;

	
	return 0;
}