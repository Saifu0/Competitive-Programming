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

bool covered(int x,int y, int x1,int y1, int x2,int y2){
	return (x >= x1 && x <= x2 && y >= y1 && y <= y2); 
}

int find_area(int x1,int y1, int x2, int y2,int x3,int y3,int x4,int y4){
	int cnt = 0;
	if(covered(x1,y1,x3,y3,x4,y4))cnt++;
	if(covered(x1,y2,x3,y3,x4,y4))cnt++;
	if(covered(x2,y1,x3,y3,x4,y4))cnt++;
	if(covered(x2,y2,x3,y3,x4,y4))cnt++;
	if(cnt<2){
		return (x1-x2)*(y1-y2);
	}
	if(cnt==4){
		return 0;
	}

	int xl = max(x1,x3);
	int xr = min(x2,x4);
	int yl = max(y1,y3);
	int yr = min(y2,y4);

	return ((x1-x2)*(y1-y2) - (xr-xl)*(yr-yl));
}

int32_t main(){
	NINJA;

	int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
	int x3,y3,x4,y4; cin >> x3 >> y3 >> x4 >> y4;
	int x5,y5,x6,y6; cin >> x5 >> y5 >> x6 >> y6;

	int area1 = find_area(x1,y1,x2,y2,x3,y3,x4,y4);
	int area2 = find_area(x1,y1,x2,y2,x5,y5,x6,y6);

	int rem = ((x1-x2)*())
	
	return 0;
}