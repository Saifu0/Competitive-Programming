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

int32_t main(){
	NINJA;
  	freopen("pairup.in", "rt", stdin);
 	freopen("pairup.out", "wt", stdout);
	int n; cin >> n;
	vii p;
	fo(i,n){
		int x,y; cin >> x >> y;
		p.pb({y,x});
	}
	sort(p.begin(), p.end());
	int m = 0;
	int i =0, j = n-1;
	while(i<=j){
		int x = min(p[i].S,p[j].S);
		if(i==j) x /= 2;
		m = max(m,p[i].F+p[j].F);
		p[i].S -= x;
		p[j].S -= x;
		if(p[i].S==0) i++;
		if(p[j].S==0) j--;
	}
	cout << m << endl;
	
	return 0;
}