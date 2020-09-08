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

const int mxn = 110;
string a[mxn],b[mxn];

int32_t main(){
	NINJA;
	freopen("cownomics.in", "rt", stdin);
	freopen("cownomics.out", "wt", stdout);
	int n,m; cin >> n >> m;
	fo(i,n) cin >> a[i];
	fo(i,n) cin >> b[i];

	int cnt = 0;
	fo(i,m){
		set<char> s,q;
		fo(j,n) s.insert(a[j][i]);
		fo(j,n) q.insert(b[j][i]);
		bool ok = 1;
		for(auto each : s){
			ok &= (q.find(each)==q.end());
		}
		if(ok) cnt++;
	}
	cout << cnt << endl;
	
	return 0;
}