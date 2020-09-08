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
vi g[mxn];
bool vis[mxn];
vector<pair<char,char>> ans;

void dfs(int v){
	vis[v] = true;
	for(auto u : g[v]){
		if(!vis[u]){
			ans.pb({v+'a',u+'a'});
			dfs(u);
		}
	}
}

int32_t main(){
	NINJA;

	int n; cin >> n;
	string a,b; cin >> a >> b;

	fo(i,n){
		g[a[i]-'a'].pb(b[i]-'a');
		g[b[i]-'a'].pb(a[i]-'a');
	}

	fo(i,n){
		if(!vis[a[i]-'a']){
			dfs(a[i]-'a');
		}
	}

	cout << sz(ans) << endl;
	for(auto it : ans) cout << it.F << " " << it.S << endl;

	
	return 0;
}