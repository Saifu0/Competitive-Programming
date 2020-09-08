#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
const int INF = 1000*1000*1000;

const int mxn = 501;
int d[mxn][mxn];
int ans[mxn][mxn];
int price[mxn];


int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		fo(i,n){
			fo(j,n) d[i][j] = INT_MAX , ans[i][j] = INT_MAX;
			d[i][i] = 0;
			ans[i][i] = 0;
		}

		fo(i,m){
			int f,s,w; cin >> f >> s >> w;
			--f,--s;
			d[f][s] = w;
			d[s][f] = w;
		}

		fo(i,n) cin >> price[i];

		int p,q; cin >> p >> q;

		fo(k,n) fo(i,n) fo(j,n) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

		fo(i,n) fo(j,n) ans[i][j] = d[i][j]*price[i];

		fo(k,n) fo(i,n) fo(j,n) ans[i][j] = min(ans[i][j], ans[i][k] + ans[k][j]);

		--p,--q;
		cout << ans[p][q] << endl;
	}

	return 0;
}