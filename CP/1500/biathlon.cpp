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

const int mxn = 2e5+10;
int ans[mxn];
mp m,idx;
int cnt;

void check(int i, int x, int x1, int y){
	int eq = (x-x1)*(x-x1) + y*y;
	int r = m[x]*m[x];
	if(eq<=r){
		if(!ans[idx[x]]){
			cnt++;
			ans[idx[x]] = i;
		}
	}
}

int32_t main(){
	NINJA;

	int n; cin >> n;
	vi a;
	for1(i,n){
		int x,r; cin >> x >> r;
		a.pb(x);
		idx[x] = i;
		m[x] = r;
	}

	sort(a.begin(), a.end());
	int m; cin >> m;
	for1(i,m){
		int x,y; cin >> x >> y;
		auto it = lower_bound(a.begin(), a.end(),x);
		if(it!=a.end()){
			check(i,*it,x,y);
		}
		if(it!=a.begin()){
			it--;
			check(i,*it,x,y);
		}
	}

	cout << cnt << endl;
	for1(i,n) {
		if(!ans[i]) cout << -1 << " ";
		else cout << ans[i] << " ";
	}
	cout << endl;
	
	return 0;
}