// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

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

const int mxn = 22;
string a[mxn];
bool vis[mxn][mxn];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
vector<tuple<int,int,int,int>> q;

bool pcl_in_pcl(int x, int y){
	return get<0>(q[x])>=get<0>(q[y])&&get<1>(q[x])>=get<1>(q[y])&&get<2>(q[x])<=get<2>(q[y])&&get<3>(q[x])<=get<3>(q[y]);
}

bool check_pcl(int x){
	fo(i,sz(q)){
		if(i!=x and pcl_in_pcl(x,i)) return 0;
	}
	return 1;
}

void dfs(char c,int x, int y,int n1, int n2, int n, int m){
	vis[x][y] = 1;
	fo(i,4){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx<n and nx>=n1 and ny<m and ny>=n2 and !vis[nx][ny] and a[nx][ny]==c) dfs(c,nx,ny,n1,n2,n,m);
	}
}

int32_t main(){
	NINJA;
  	freopen("where.in", "rt", stdin);
 	freopen("where.out", "wt", stdout);	
	int n; cin >> n;
	fo(i,n) cin >> a[i];
	int cnt = 0;

	
	fo(x,n){
		fo(y,n){
			for(int i1=x;i1<n;i1++){
				for(int j1=y;j1<n;j1++){
					int num_colors = 0;
					int color_count[26];
					memset(color_count,0,sizeof(color_count));
					memset(vis,0,sizeof(vis));
					for(int i=x;i<=i1;i++){
						for(int j=y;j<=j1;j++){
							if(!vis[i][j]){
								char c = a[i][j];
								dfs(c,i,j,x,y,i1+1,j1+1);
								int cc = c-'A';
								if(color_count[cc]==0) num_colors++;
								color_count[cc]++;
							}
						}
					}
					if (num_colors != 2) continue;
					  bool found_one=false, found_many=false;
					  for (int i=0; i<26; i++) {
					    if (color_count[i] == 1) found_one = true;
					    if (color_count[i] > 1) found_many = true;
					  }
					if(found_one and found_many){
						q.push_back(make_tuple(x,y,i1,j1));
					}
				}
			}
		}
	}
	fo(i,sz(q)){
		if(check_pcl(i)) cnt++;
	}
	cout << cnt << endl;
	
	return 0;
}