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

const int mxn = 105;
vector<string> grid;
int a[mxn][mxn],b[mxn][mxn];
int r[mxn][mxn];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int n,m;

int go(int i, int j,int k){
	int nx = dx[k];
	int ny = dy[k];
	int cnt = 0;
	while(i>=0 and j>=0 and i<n and j<m and grid[i][j]=='*'){
		cnt++;
		i += nx;
		j += ny;
	}
	return cnt;
}

int32_t main(){
	NINJA;

	cin >> n >> m;
	grid.resize(n);
	fo(i,n){
		cin >> grid[i];
	}
	int ans = 0;
	Fo(i,1,n-1){
		Fo(j,1,m-1){
			if(grid[i][j]=='*'){
				bool ok = 1;
				fo(k,4) ok = ok&&(grid[i+dx[k]][j+dy[k]]=='*');
				if(ok){
					r[i][j] = inf;
					fo(k,4) r[i][j] = min(r[i][j],go(i,j,k)-1);
					debug() << deb(r[i][j]);
					ans++;
					a[i][j-r[i][j]] = max(a[i][j-r[i][j]],2*r[i][j]+1);
					b[i-r[i][j]][j] = max(b[i-r[i][j]][j],2*r[i][j]+1);
				}
			}
			// fo(k,n){
			// 	fo(l,m){
			// 		cout << a[k][l] << " ";
			// 	}
			// 	cout << endl;
			// }

			// cout << endl;
		}
	}
	vector<string> g(n,string(m,'.'));
	fo(i,n){
		int v = 0;
		fo(j,m){
			v = max(v-1,a[i][j]);
			if(v>0) g[i][j] = '*';
		}
	}

	fo(i,m){
		int v = 0;
		fo(j,n){
			v = max(v-1,b[j][i]);
			if(v>0) g[j][i] = '*';
		}
	}

	if(grid==g){
		cout << ans << endl;
		fo(i,n){
			fo(j,m){
				if(r[i][j]>0){
					cout << i+1 << " " << j+1 << " " << r[i][j] << endl;
				}
			}
		}
	}else{
		cout << -1 << endl;
	}
	
	return 0;
}