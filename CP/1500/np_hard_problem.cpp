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

const int mxn = 1e5+500;
bool vis[mxn];
vi g[mxn];
int a[mxn];
int n,m;
///bool f = 0;

bool dfs(int v, int c, int par){
	vis[v] = 1;
	a[v] = c;

	for(auto u : g[v]){
		if(!vis[u] && dfs(u,c^1,v)){
			return true;
		}else{
			if(a[u]==a[v]){
				return true;
				break;
			}
		}
	}
	return false;
}

int32_t main(){
	NINJA;

	cin >> n >> m;
	fo(i,m){
		int f,s; cin >> f >> s;
		g[f].pb(s);
		g[s].pb(f);
	}

	for(int i=1;i<=n;i++){
		if(!vis[i]){
			//f=0;
			if(dfs(i,0,-1)){
				cout << -1 << endl;
				return 0;
			}
		}
	}

	

	vi s1,s2;

	Fo(i,1,n+1){
		if(a[i]==0) s1.pb(i);
		else s2.pb(i);
	}



	cout << sz(s1) << endl;
	for(auto it : s1) cout << it << " ";
	cout << endl;

	cout << sz(s2) << endl;
	for(auto it : s2) cout << it << " ";
	cout << endl;
	
	return 0;
}