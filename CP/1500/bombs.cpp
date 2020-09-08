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

const int mxn = 1e6+500;
int n;
ii a[mxn];
vector<pair<ii,char>> ans;

bool cmp(ii x, ii y){
	return (abs(x.F)+abs(x.S)) < (abs(y.F)+abs(y.S));
}

int32_t main(){
	NINJA;

	//vi aa;
	

	cin >> n;
	fo(i,n) cin >> a[i].F >> a[i].S;
	sort(a,a+n,cmp);
	int cnt = 0;
	fo(i,n){
		if(a[i].F < 0 ) ans.pb({{1,abs(a[i].F)},'L'}),cnt++;
		if(a[i].F > 0) ans.pb({{1,abs(a[i].F)},'R'}),cnt++;
		if(a[i].S < 0) ans.pb({{1,abs(a[i].S)}, 'D'}),cnt++;
		if(a[i].S > 0) ans.pb({{1,abs(a[i].S)}, 'U'}),cnt++;
		ans.pb({{-1,2},'X'}),cnt++;
		if(a[i].F < 0 ) ans.pb({{1,abs(a[i].F)},'R'}),cnt++;
		if(a[i].F > 0) ans.pb({{1,abs(a[i].F)},'L'}),cnt++;
		if(a[i].S < 0) ans.pb({{1,abs(a[i].S)}, 'U'}),cnt++;
		if(a[i].S > 0) ans.pb({{1,abs(a[i].S)}, 'D'}),cnt++;
		ans.pb({{-1,3},'Y'}),cnt++;;
	}

	cout << cnt << endl;

	for(auto it : ans){
		if(it.F.F==-1) cout << it.F.S << endl;
		else cout << it.F.F << " " << it.F.S << " " << it.S << endl;
 	}
	
	return 0;
}