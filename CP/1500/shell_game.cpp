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

	freopen("shell.in", "rt", stdin);
	freopen("shell.out", "wt", stdout);

	int n; cin >> n;
	vector<pair<pair<int,int>,int>> p;
	fo(i,n){
		int a,b,x; cin >> a >> b >> x;
		p.pb({{a,b},x});
	}
	int best = 0;
	for1(i,3){
		int cnt = 0;
		int a[4] = {0};
		a[i] = 1;
		fo(i,n){
			swap(a[p[i].F.F],a[p[i].F.S]);
			if(a[p[i].S]==1) cnt++;
		}
		best = max(best,cnt);
	}
	cout << best << endl;
	
	return 0;
}