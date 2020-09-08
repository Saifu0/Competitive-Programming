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

const int mxn = 1e3+10;
vector<ii> g[mxn];
int n,m,k;
int a[mxn];

bool cmp(int x, int y){
	if(a[x]==a[y]) return true;
	return a[x] > a[y];
}

int32_t main(){
	NINJA;
	cin >> n >> m >> k;
	//--k;

	fo(i,n) cin >> a[i+1];

	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb({a[s],s});
		g[s].pb({a[f],f});
	}

	Fo(i,1,n+1){
		sort(g[i].begin(), g[i].end());
	}

	Fo(i,1,n+1){
		if(k > sz(g[i])) cout << -1 << endl;
		else cout << g[i][sz(g[i])-k].S << endl;
		// for(int j : g[i]) {
		// 	cout << j << " ";
		// }
		// cout << endl;
	}
	
	return 0;
}