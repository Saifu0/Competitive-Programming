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

const int mxn = 1e5+50;
ii a[mxn];
int n;

int32_t main(){
	NINJA;
	cin >> n;
	int mx = -inf;

	fo(i,n) cin >> a[i].F , a[i].S = i, mx = max(mx,a[i].F);

	sort(a,a+n);

	if(n%2){
		vi x,y;
		for(int i=0;i<n-1;i+=2) x.pb(a[i].S+1), y.pb(a[i+1].S+1);
		x.pb(a[n-1].S+1);
		cout << sz(x) << endl;
		for(auto i : x) cout << i << " ";
		cout << endl;
		cout << sz(y) << endl;
		for(auto i : y) cout << i << " ";
		cout << endl;
	}else{
		vi x,y;
		for(int i=0;i<n;i+=2) x.pb(a[i].S+1), y.pb(a[i+1].S+1);
		cout << sz(x) << endl;
		for(auto i : x) cout << i << " ";
		cout << endl;
		cout << sz(y) << endl;
		for(auto i : y) cout << i << " ";
		cout << endl;
	}
	
	return 0;
}