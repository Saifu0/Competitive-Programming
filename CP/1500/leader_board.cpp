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



int32_t main(){
	NINJA;

	int n; cin >> n;
	set<int> s;
	fo(i,n){
		int x; cin >> x;
		s.insert(x);
	}


	int m; cin >> m;
	vi query(m);

	fo(i,m){
		cin >> query[i];
		// int x = query[i];
		// s.insert(x);
	}

	vi a;
	for(auto i : s){
		a.pb(i);
		// cout << i << " ";
	}
	// sort(a.begin(), a.end());
	// reverse(a.begin(), a.end());

	int idx = 0;
	fo(i,m){
		while(idx < sz(a) && a[idx] <= query[i]) idx++;
		cout << sz(a) - idx + 1 << endl;
	}


	
	return 0;
}