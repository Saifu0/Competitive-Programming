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
#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin(),a.end()
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

const int mxn = 25;
string grid[mxn];
int vis[mxn][mxn];
int n,m;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int ans[mxn][mxn];

bool valid(int x, int y){
	return (x>=0 and x<n and y>=0 and y<m);
}



int32_t main(){
	NINJA;

	cin >> n >> m;
	fo(i,n) cin >> grid[i];

	int x=-1,y=-1;
	fo(i,n){
		fo(j,n){
			if(grid[i][j]=='.'){
				x=i,y=j;
				break;
			}
		}
		if(x!=-1) break;
	}

	int res =0 ;
	fo(x,n){
		fo(y,m){
			if(grid[x][y]=='#') continue;
			memo(vis,-1);
			vis[x][y]=0;
			int se,ed;
			queue<pair<int,int>> q;
			q.push({x,y});

			while(!q.empty()){
				tie(se,ed) = q.front();
				q.pop();
				fo(i,4){
					int nx=se+dx[i];
					int ny=ed+dy[i];
					if(valid(nx,ny) and vis[nx][ny]==-1 and grid[nx][ny]=='.'){
						vis[nx][ny] = 1 + vis[se][ed];
						ans[nx][ny] = max(ans[nx][ny],vis[nx][ny]);
						q.push({nx,ny});
					}
				}
			}
		}
	}

	fo(i,n){
		fo(j,m){
			res=max(res,ans[i][j]);
		}
	}

	cout << res << endl;
	
	return 0;
}