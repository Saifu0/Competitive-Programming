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

const int mxn = 2e6+10;
map<ii,int> ok, m;
ii q[mxn];

void bfs(int x, int y){
	int h = 0, t = 0;
	q[t++] = {x,y};
	m[{x,y}] =0;
	while(h<t){
		int a = q[h].F;
		int b = q[h++].S;

		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				if(m.count({a+i,b+j})==0 && ok[{a+i,b+j}]==1){
					m[{a+i,b+j}] = m[{a,b}] + 1;
					q[t++] = {a+i,b+j};
				}
			}
		}
	}
}


int32_t main(){
	NINJA;

	int a,b,c,d; cin >> a >> b >> c >> d;
	int t; cin >> t;
	while(t--){
		int p,l,r; cin >> p >> l >> r;
		Fo(i,l,r+1) ok[{p,i}] = 1;
	}

	bfs(a,b);
	if(m[{c,d}]){
		cout << m[{c,d}] << endl;
	}else{
		cout << -1 << endl;
	}
	
	return 0;
}