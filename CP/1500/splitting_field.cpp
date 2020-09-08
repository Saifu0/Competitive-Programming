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

bool cmp(ii x, ii y){
	return x.S < y.S;
}

const int mxn = 1e5+10;
int pMax[mxn],pMin[mxn],sMax[mxn],sMin[mxn];
int n;

int solve(vii a){
	memset(pMin,inf,sizeof(pMin));
	memset(sMin,inf,sizeof(sMin));
	
	pMin[0] = a[0].F;
	pMax[0] = a[0].F;
	sMin[n-1] = a[n-1].F;
	sMax[n-1] = a[n-1].F;
	for1(i,n-1) pMin[i] = min(pMin[i-1],a[i].F);
	for1(i,n-1) pMax[i] = max(pMax[i-1],a[i].F);
	for(int i=n-2;i>=0;i--) sMin[i] = min(sMin[i+1],a[i].F);
	for(int i=n-2;i>=0;i--) sMax[i] = max(sMax[i+1],a[i].F);

	int mn =inf;
	fo(i,n-1){
		int f = abs(a[0].S-a[i].S)*abs(pMin[i]-pMax[i]);
		int s = abs(a[n-1].S-a[i+1].S)*abs(sMin[i+1]-sMax[i+1]);
		mn = min(mn,(f+s));
	}
	return mn;
}

int32_t main(){
	NINJA;
  	freopen("split.in", "rt", stdin);
 	freopen("split.out", "wt", stdout);	
	cin >> n;
	vii a(n);
	fo(i,n) cin >> a[i].F >> a[i].S;
	
	int mxX=0,mnX=inf,mxY=0,mnY=inf;
	for(auto i : a){
		mxX = max(mxX,i.F);
		mnX = min(mnX,i.F);
		mxY = max(mxY,i.S);
		mnY = min(mnY,i.S);
	}
	int ans = abs(mxX-mnX)*abs(mxY-mnY);

	sort(a.begin(), a.end(),cmp);
	int mn = solve(a);

	for(auto &each : a) swap(each.F, each.S);
	sort(a.begin(), a.end(),cmp);
	mn = min(solve(a),mn);

	cout << ans-mn << endl;
	
	return 0;
}