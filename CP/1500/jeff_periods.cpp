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

const int mxn = 1e5+10;
int a[mxn];
bool vis[mxn];

int32_t main(){
	NINJA;

	map<int,vi> m;

	int n; cin >> n;
	for1(i,n){
		int x; cin >> x;
		m[x].pb(i);
	}

	vii st;
	for(auto i : m){
		set<int> dif;
		for1(j,sz(i.S)-1){
			dif.insert(i.S[j] - i.S[j-1]);
		}
		if(sz(dif)==0) st.pb({i.F,0});
		else if(sz(dif)==1) st.pb({i.F,*dif.begin()});
	}
	cout << sz(st) << endl;
	for(auto i : st) cout << i.F << " " << i.S << endl;
	
	return 0;
}