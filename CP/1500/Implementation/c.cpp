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
int a[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for1(i,n) cin >> a[i];

		mp m;
		for1(i,n) m[a[i]]++;

		bool f = 0;
		for(auto it : m){
			if(it.S>1){
				f = 1;
				break;
			}
		}

		if(!f){
			cout << -1 << endl;
			continue;
		}

		map<int,vii> mm;

		for1(i,n){
			if(sz(mm[a[i]]) == 0){
				mm[a[i]].pb({i,inf});
			}else{
				// vii st = mm[a[i]];
				if(mm[a[i]][0].S==inf) mm[a[i]][0].S = i;
				else mm[a[i]].pb({mm[a[i]][sz(mm[a[i]])-1].S,i});
			}
		}

		int mn = inf;
		for(auto i : mm){
			// cout << i.F << endl;
			for(auto j : i.S){
				mn = min(mn,(j.S-j.F+1));
				// cout << j.F << " " << j.S << endl;
			}
		}

		cout << mn << endl;

	}
	
	return 0;
}