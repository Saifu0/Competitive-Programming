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
	freopen("square.in", "rt", stdin);
	freopen("square.out", "wt", stdout);
	int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
	int x3,y3,x4,y4; cin >> x3 >> y3 >> x4 >> y4;
	x1 = min(x1,x3);
	y1 = min(y1,y3);
	x2 = max(x2,x4);
	y2 = max(y2,y4);

	cout << max(abs(x1-x2),abs(y1-y2))*max(abs(x1-x2),abs(y1-y2)) << endl;
	
	return 0;
}