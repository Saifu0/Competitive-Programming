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

int ok[2000][2000];

int32_t main(){
	NINJA;
	freopen("billboard.in", "rt", stdin);
	freopen("billboard.out", "wt", stdout);
	int x1,y1,x2,y2,x3,y3;
	fo(i,3){
		cin >> x1 >> y1 >> x2 >> y2;
		x1 += 1000, y1 += 1000, x2+= 1000, y2 += 1000;
		for(int x=x1;x<x2;x++){
			for(int y=y1;y<y2;y++){
				if(i<2) ok[x][y] = 1;
				else ok[x][y] = 0;
			}
		}
	}
	int ans = 0;
	fo(i,2000) fo(j,2000) ans += ok[i][j];
	cout << ans << endl;
	
	return 0;
}