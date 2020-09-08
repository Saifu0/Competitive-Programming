// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 310;
int a[mxn][mxn];
int p[mxn];
bool vis[mxn];
bool mark[mxn];
int n;
vi v;

void dfs(int x){
	vis[x] = mark[x] = 1;
	v.pb(x);
	fo(i,n) if(a[x][i] && !vis[i]) dfs(i);
}

int32_t main(){
	NINJA;
	
	cin >> n;
	fo(i,n) cin >> p[i];
	fo(i,n){
		string s; cin >> s;
		fo(j,n){
			a[i][j] = s[j]-'0';
		}
	}

	fo(i,n){
		if(!mark[i]){
			memset(vis,false,sizeof(vis));
			v.clear();
			dfs(i);
			sort(v.begin(), v.end());
			for(int j=sz(v)-1;j>0;j--){
				Fo(k,1,j+1){
					if(p[v[k-1]] > p[v[k]]){
						swap(p[v[k-1]],p[v[k]]);
					}
				}
			}
		}
	}

	fo(i,n) cout << p[i] << " ";



	return 0;
}