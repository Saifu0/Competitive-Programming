#include<bits/stdc++.h>
using namespace std;

const int mxn = 110;
vector<int> g[mxn];
int vis[mxn];
int n,m;

void dfs(int v){
    if(vis[v]) return;
    vis[v] =1;
    for(int u : g[v]) dfs(u);
}

int main(){
    while(1){
        cin >> n >> m;
        if(n==0 and m==0) return 0;
        for(int i=0;i<n;i++) g[i].clear(), vis[i] = 0;
        for(int i=0;i<m;i++){
            int u,v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        bool ok = 1;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < g[i].size(); ++j)
            {
                memset(vis,0,sizeof(vis));
                
                int u=i,v=g[i][j];
                for(int k=0;k<g[u].size();k++){
                    if(g[u][k]==v){
                        g[u].erase(g[u].begin()+k);
                        break;
                    }
                }
                for(int k=0;k<g[v].size();k++){
                    if(g[v][k]==u){
                        g[v].erase(g[v].begin()+k);
                        break;
                    }
                }

                dfs(i);
                for(int k=0;k<n;k++){
                    ok &= (vis[k]==1);
                }
                g[u].push_back(v);
                g[v].push_back(u);
                if(!ok) break;
            }
            if(!ok) break;
        }
        if(!ok) cout << "Yes\n";
        else cout << "No\n"; 
    }
}