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
	vector<pair<int,bool>> a;
	fo(i,n){
		int x,y;
		cin >> x >> y;
		a.pb({x,1});
		a.pb({y,0});
	}
	sort(a.begin(), a.end());
	int cnt =0 ;
	int mx = 0;
	for(auto i : a){
		if(i.S==1) cnt++;
		else cnt--;
		mx = max(mx,cnt);
		// cout << i.F << " " << i.S << endl;
	}
	cout << mx << endl;
	
	return 0;
}