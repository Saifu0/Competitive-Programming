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

	int x; cin >> x;
	int n; cin >> n;
	multiset<int> g = {x};
	set<int> s = {0,x};
	fo(i,n){
		int point; cin >> point;
		auto it = s.lower_bound(point);
		int l = *prev(it);
		int r = *it;
		g.erase(g.find(r-l));
		g.insert(point-l);
		g.insert(r-point);
		s.insert(it,point);
		cout << *g.rbegin() << " ";
	}

	// for(int each : s) cout << each <<  endl;
	
	return 0;
}