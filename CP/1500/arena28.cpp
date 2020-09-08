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

const int mxn = 1e5+10;
vi g[mxn];
bool vis[mxn];
vi comp;
int n,m;

void dfs(int v){
    vis[v] = 1;
    comp.pb(v);
    for(auto u :g[v]){
        if(!vis[u]) dfs(u);
    }
}

int32_t main(){
    NINJA;

    cin >> n >> m;

    fo(i,m){
        int f,s; cin >>f >> s;
        g[f].pb(s);
        g[s].pb(f);
    }

    int cnt = 0;
     int c = 0;

    fo(i,n){
        if(!vis[i]){
            comp.clear();
            dfs(i);
            int t = sz(comp);

            c += t*cnt;
            cnt += t;
        }
    }

   
   cout << c << endl;
    
    return 0;
}