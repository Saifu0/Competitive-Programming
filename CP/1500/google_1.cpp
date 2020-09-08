#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

const int mxn = 1e5+10;
vector<int> g[mxn];
int n;
int val[mxn];

void delEdge(int u, int v) 
{ 
    // for (int i = 0; i < g[u].size(); i++) { 
    //     if (g[u][i] == v) { 
    //         g[u].erase(g[u].begin() + i); 
    //         break; 
    //     } 
    // } 
  
    // Traversing through the second vector list 
    // and removing the first element from it 
    for (int i = 0; i < g[v].size(); i++) { 
        if (g[v][i] == u) { 
            g[v].erase(g[v].begin() + i); 
            break; 
        } 
    } 
} 

int ans[mxn];

bool coprime(int v, int u){
	return __gcd(val[v],val[u]);
}

void dfs(int v,int p){
	for(int u :g[v]){

		if(u!=p){
			dfs(u,v);
			cout << u << endl;
		}
		cout << v << " " << u << endl;
		if(coprime(v,u)){
			ans[v] = u; 
		}
	}

}

int32_t main(){

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> val[i];
	}

	for (int i = 0; i < n-1; ++i)
	{
		int u,v; cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}

	dfs(1,-1);

	for (int i = 1; i <= n; ++i)
	{
		cout << ans[i] << " ";
	}

	return 0;
}

// 6
// 5 19 12 10 9 16
// 4 3 
// 5 3
// 6 2
// 6 1
// 4 6