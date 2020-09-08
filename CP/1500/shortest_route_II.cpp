#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int inf = 1e18;
const int mxn = 567;
int g[mxn][mxn];
int n,m,q;

int32_t main(){
	NINJA;
	
	cin >> n >> m >> q;
	Fo(i,1,n+1){
		Fo(j,1,n+1){
			g[i][j] = inf;
		}
		g[i][i] = 0;
	}
	
	fo(i,m){
		int f,s,w; cin >> f >> s >> w;
		g[f][s] = min(g[f][s],w);
		g[s][f] = min(g[s][f],w);
	}
	
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
			}
		}
	}
	
	while(q--){
		int f,s; cin >> f >> s;
		if(g[f][s]!=inf) cout << g[f][s] << endl;
		else cout << -1 << endl;
	}
	

	return 0;
}

