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

float area(int x1,int y1, int x2, int y2, int x3, int y3){
	return abs(((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2.0);
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int x1,y1,x2,y2,x3,y3,x,y; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y;

		float a = area(x1,y1,x2,y2,x3,y3);
		float a1 = area(x,y,x2,y2,x3,y3);
		float a2 = area(x1,y1,x,y,x3,y3);
		float a3 = area(x1,y1,x2,y2,x,y);

		if(a==(a1+a2+a3)) cout << "INSIDE" << endl;
		else cout << "OUTSIDE" << endl;
	}
	
	return 0;
}	
