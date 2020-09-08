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

const int mxn = 1010;
char mat[mxn][mxn];
priority_queue<pair<int,ii>,vector<pair<int,ii>>,greater<pair<int,ii>>>q;
int dist[mxn][mxn];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

int32_t main(){
	NINJA;

	int n,m; cin >> n >> m;

	for1(i,n){
		for1(j,m){
			dist[i][j] = inf;
		}
	}

	int sx,sy,ex,ey;
	cin >> sx >> sy >> ex >> ey;

	for1(i,n) for1(j,m) cin >> mat[i][j];

	dist[sx][sy] = 0;
	q.push({0,{sx,sy}});

	while(!q.empty()){
		int c = q.top().first;
		int x,y;
		tie(x,y) = q.top().second;
		q.pop();

		fo(i,4){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx<1||ny<1||nx>n||ny>m||mat[nx][ny]=='#') continue;
			if(dist[nx][ny]>dist[x][y]){
				dist[nx][ny] = dist[x][y];
				q.push({c,{nx,ny}});
			}
		}
		for(int i=-2;i<=2;i++){
			for(int j=-2;j<=2;j++){
				int nx = x + i;
				int ny = y + j;
				if(nx<1||ny<1||nx>n||ny>m||mat[nx][ny]=='#') continue;
				if(dist[nx][ny]>dist[x][y]+1){
					dist[nx][ny] = dist[x][y]+1;
					q.push({c+1,{nx,ny}});
				}
			}
		}
	}

	

	int ans = dist[ex][ey];
	if(ans==inf) cout << -1 << endl;
	else cout << dist[ex][ey] << endl;
	
	return 0;
}