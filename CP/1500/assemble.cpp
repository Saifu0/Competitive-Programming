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

int n,k;
map<string,vector<pair<int,int>>> m;
vector<string> st;
int len;

void solve(int i, int val, int &mxn){
	if(i==len) return;

	for(auto it : m[st[i]]){
		if(val+it.F <= k){
			solve(i+1,val+it.F, mxn=max(mxn,it.S));
		}
	}
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		fo(i,n){
			string a,b; cin >> a >> b;
			int x,y; cin >> x >> y;
			m[a].pb({x,y});
			st.pb(a);
		}
		len = sz(st);
		int mxn = 0;
		solve(0,0,mxn);
		cout << mxn << endl;
	}
	
	return 0;
}