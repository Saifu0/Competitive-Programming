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

struct edge {
	int x,y,a,b; 
	int vis=0;
};
const int mxn = 2e4+10;
edge g[mxn];
int grid[110][110];
int on[110][110];

int32_t main(){
	NINJA;


  // 	freopen("lightson.in", "rt", stdin);
 	// freopen("lightson.out", "wt", stdout);
	int n,m; cin >> n >> m;
	for1(i,m){
		cin >> g[i].x >> g[i].y >> g[i].a >> g[i].b;
	}
	on[1][1] = 1;
	on[1][2] = 1;
	on[2][1] = 1;

	grid[1][1] = 1;
	bool check = 1;
	while(check==1){
		check = 0;
		for1(i,n){
			for1(j,n){
				if(grid[i][j] and on[i][j]){
					if(on[i+1][j]==0){
						on[i+1][j] = 1;
						check = 1;
					}
					if(on[i][j+1]==0){
						on[i][j+1] = 1;
						check = 1;
					}
					if(on[i-1][j]==0){
						on[i-1][j] = 1;
						check = 1;
					}
					if(on[i][j-1]==0){
						on[i][j-1] = 1;
						check = 1;
					}
				}
			}
		}

		for1(i,m){
			if(g[i].vis==0 and on[g[i].x][g[i].y] and grid[g[i].x][g[i].y]){
				grid[g[i].a][g[i].b] = 1;
				g[i].vis= 1;
				check=1;
			}
		}
	}

	for1(i,n){
		for1(j,n){
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}

	int cnt =0;
	for1(i,n){
		for1(j,n){
			cnt += grid[i][j];
		}
	}
	cout << cnt << endl;

	
	
	return 0;
}

// 5 25
// 5 3 4 3
// 1 1 1 3
// 1 3 2 2
// 4 2 4 3
// 1 1 1 2
// 1 4 3 5
// 5 1 3 1
// 5 3 5 2
// 4 3 4 5
// 5 4 3 1
// 5 4 3 4
// 3 4 5 4
// 3 3 4 3
// 3 3 1 5
// 1 2 2 1
// 4 5 3 1
// 1 4 3 3
// 4 5 1 3
// 2 1 5 1
// 3 5 5 1
// 2 1 1 4
// 4 3 5 4
// 1 3 2 3
// 3 3 5 2
// 1 2 3 1


// 5 10
// 3 5 1 2
// 1 1 1 2
// 1 1 2 2
// 3 3 1 1
// 4 1 3 2
// 1 2 1 3
// 2 3 4 3
// 1 1 2 1
// 5 1 2 1
// 1 1 3 2