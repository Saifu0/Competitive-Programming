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

const int mxn = 150000+10;
vi g[mxn];
bool vis[mxn];
int n,m;
int cnt_v,cnt_e;

void dfs(int v){
	vis[v] = 1;
	cnt_v += 1;
	cnt_e += g[v].size();

	for(auto u : g[v]){
		if(!vis[u]) dfs(u);
	}
}

int32_t main(){
	NINJA;
	cin >> n >> m;

	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		g[s].pb(f);
	}

	bool ok = 1;
	
	Fo(i,1,n+1){
		if(!vis[i]){
			cnt_v = 0;
			cnt_e = 0;
			dfs(i);
			if(cnt_v*(cnt_v-1) != cnt_e){
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	cout << "YES" << endl;

	return 0;
}