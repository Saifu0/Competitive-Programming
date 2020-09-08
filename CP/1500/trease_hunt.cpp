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
	
	int n; cin >> n;
	string a,b,c; cin >> a >> b >> c;

	int ma=0,mb=0,mc=0;
	map<char,int> m1,m2,m3;
	for(char c : a) ma = max(ma,++m1[c]);
	for(char c : b) mb = max(mb,++m2[c]);
	for(char c : c) mc = max(mc,++m3[c]);

	if(n==1 && ma==sz(a)) a.pop_back();
	if(n==1 && mb==sz(b)) b.pop_back();
	if(n==1 && mc==sz(c)) c.pop_back();
	
	ma = min(ma+n,sz(a));
	mb = min(mb+n,sz(b));
	mc = min(mc+n,sz(c));

	if(ma > mb && ma > mc) cout << "Kuro" << endl;
	else if(mb > ma && mb > mc) cout << "Shiro" << endl;
	else if(mc > ma && mc > mb) cout << "Katie" << endl;
	else cout << "Draw" << endl;

	return 0;
}