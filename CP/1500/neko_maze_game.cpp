#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
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

vector<vi> grid;

int32_t main(){
	NINJA;

	int n,q; cin >> n >> q;
	grid.resize(2, vector<int>(n, 0));

	int blocked=0;

	fo(j,q){
		int x,y; cin >> x >> y;
		--x ,--y;

		int d = (grid[x][y]==0) ? 1 : -1;

		grid[x][y] = 1-grid[x][y];

		for(int i=-1;i<=1;i++){
			if(i+y<0 || i+y>=n) continue;

			if(grid[1-x][i+y]==1) blocked += d;
		}

		cout << ((blocked ==0 ) ? "Yes\n" : "No\n");

	}
	
	return 0;
}