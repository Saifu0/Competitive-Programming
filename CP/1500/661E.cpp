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

struct cmp {
	bool operator() (ii a, ii b){
		return (a.F - a.F/2)*a.S > (b.F - b.F/2)*b.S;
	}
};

multiset<ii,cmp> q;
vii g[mxn];
int sum = 0;
int n;

int dfs(int v, int p){
	int ans =0 ;
	for(ii u : g[v]){
		if(u.F == p) continue;
		int temp = dfs(u.F,v);
		q.insert({u.S,temp});
		sum += u.S*temp;
		ans += temp;
	}
	if(ans==0) ans = 1;
	return ans;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		sum = 0;
		cin >> n;
		int s; cin >> s;
		for1(i,n) g[i].clear();
		q.clear();
		fo(i,n-1){
			int u,v,w; cin >> u >> v >> w;
			g[u].pb({v,w});
			g[v].pb({u,w});
		}
		dfs(1,0);
		for(auto i : q){
			cout << i.F << " " << i.S << endl;
		}

		int cnt = 0;
		while(sum > s){
			cnt++;
			ii tp = *q.begin();
			q.erase(q.begin());
			sum -= tp.F*tp.S;
			tp.F /= 2;
			if(tp.F){
				sum += tp.F*tp.S;
				q.insert({tp.F,tp.S});
			}
		}
		cout << cnt << endl;
	}

	
	return 0;
}