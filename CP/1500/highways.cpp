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

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<pair<int,ii>> a;
		for1(i,n){
			int x,y; cin >> x >> y;
			a.pb({i,{x,y}});
		}

		int m; cin >> m;
		unordered_set<int> s;
		fo(i,m){
			int x,y; cin >> x>> y;
			s.insert(x);
			s.insert(y);
		}

		bool f = 1;
		for(auto i : a){
			if(s.find(i.F)!=s.end()) continue;

			int x1 = i.S.F, y1 = i.S.S;
			int mn = inf;
			int join = -1;
			for(auto it : s){
				int x2 = a[it-1].S.F, y2 = a[it-1].S.S;
				int dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
				if(dist < mn){
					mn = dist;
					join = it;
				}
			}
			s.insert(i.F);
			if(join != -1) cout << i.F << " " << join << endl, f = 0;
			else f = f&&1;
		}
		if(f) cout << "No new highways need" << endl; 
	}
	
	return 0;
}