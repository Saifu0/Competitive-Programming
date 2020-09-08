// #include<bits/stdc++.h>
// usinedges namesparentsace std;

// #define deb(x) cout << #x << " " << x << endl;
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,n) for(int i=1;i<=n;i++)
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define ll long long
// #define pb push_back
// #define endl "\n"
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007

// const int N = 2e5+10;
// int p[mxn],a[mxn],f[mxn],d[mxn];
// vi g[mxn];
// int n;

// void remove_road(int u, int v) 
// { 
//     for (int i = 0; i < g[u].size(); i++) { 
//         if (g[u][i] == v) { 
//             g[u].erase(g[u].begin() + i); 
//             break; 
//         } 
//     } 

//     // for (int i = 0; i < g[v].size(); i++) { 
//     //     if (g[v][i] == u) { 
//     //         g[v].erase(g[v].begin() + i); 
//     //         break; 
//     //     } 
//     // } 
// } 

// void dfs(int v,int p,int val){
//     f[v] -= min(a[val],f[v]);
//     for(int u : g[v]){
//         if(u!=p){
//             dfs(u,v,val);
//             remove_road(u,val);
//         }
//     }
// }

// int main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//     int t; cin >> t;
//     while(t--){
//         cin >> n;
//         Fo(i,n) g[i].clear(), p[i] =0, a[i] =0, d[i] = 0, f[i] = 0;
//         fo(i,n-1){
//             int v,u; cin >> v >> u;
//             g[v].pb(u);
//             g[u].pb(v);
//         }
//         Fo(i,n) cin >> p[i];
//         Fo(i,n) cin >> a[i];
//         Fo(i,n) cin >> f[i];
//         Fo(i,n){
//             dfs(p[i],-1,p[i]);
//             Fo(j,n){
//                 if(f[j]==0 and d[j]==0){
//                     d[j] = i; 
//                 }
//             }
//         }
//         Fo(i,n) cout << (d[i] !=0 ? d[i] : -1 ) << " ";
//         cout << endl;
//      }

//     return 0;
// }

// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define deb(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#define memo(a,val) memset(a,val,sizeof(a))
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin(),a.end()
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define int long long
#define endl "\n"
#define sz(v) (int)v.size()
#define mod 1000000007

const int N = 2e5+10;
int parents[N],a[N],f[N],d[N];
vector<int> edges[N];
int n;

void delededgese(int v, int u) 
{ 
    for (int i = 0; i < edges[v].size(); i++) { 
        if (edges[v][i] == u) { 
            edges[v].erase(edges[v].begin() + i); 
            break; 
        } 
    } 
} 

void trav(int v,int p,int val){
    f[v] -= min(a[val],f[v]);
    for(int u : edges[v]){
        if(u!=p){
            trav(u,v,val);
            delededgese(u,val);
        }
    }
}

void init(){
    for1(i,n) edges[i].clear(), parents[i] =0, a[i] =0, d[i] = 0, f[i] = 0;    
}

int32_t main(){
    fastio;

    int t; cin >> t;
    while(t--){
        cin >> n;
        init();
        fo(i,n-1){
            int v,u; cin >> v >> u;
            edges[v].push_back(u);
            edges[u].push_back(v);
        }
        for1(i,n) cin >> parents[i];
        for1(i,n) cin >> a[i];
        for1(i,n) cin >> f[i];
        for1(i,n){
            trav(parents[i],-1,parents[i]);
            for1(j,n){
                if(f[j]==0 and d[j]==0){
                    d[j] = i; 
                }
            }
        }
        for1(i,n) cout << (d[i] !=0 ? d[i] : -1 ) << " ";
        cout << endl;
     }

    return 0;
}