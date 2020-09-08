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



vi solve(multiset<int> g, multiset<int> b){
	vi a;
	bool ok = 1;
	if(*g.begin() < *b.begin()){
		a.pb(*g.begin());
		ok = 0;
		g.erase(g.begin());
	}else{
		a.pb(*b.begin());
		ok = 1;
		b.erase(b.begin());
	}

	while(sz(b) > 0 && sz(g)){
		if(ok){
			a.pb(*g.begin());
			ok = 0;
			g.erase(g.begin());
		}else{
			a.pb(*b.begin());
			ok = 1;
			b.erase(b.begin());
		}
	}

	if(sz(b) > 1){
		a.clear();
		return a;
	}else{
		if(sz(b) > 0) a.pb(*b.begin());
	}

	if(sz(g) > 1){
		a.clear();
		return a;
	}else{
		if(sz(g)>0) a.pb(*g.begin());
	}

	return a;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		multiset<int> g,b;
		
		fo(i,n){
			int x; cin >> x;
			b.insert(x);
		}
		fo(i,n){
			int x; cin >> x;
			g.insert(x);
		}

		multiset<int> c,d;
		c = b, d = g;

		vi a = solve(g,b);
		vi x = solve(c,d);


		bool ok = 1;
		for1(i,sz(a)-1) ok = ok && (a[i] >= a[i-1]);

		bool ok1 = 1;
		for1(i,sz(x)-1) ok1 = ok1 && (x[i] >= x[i-1]);

		if((ok && sz(a) > 0)  || (ok1 && sz(x))) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
	
	return 0;
}