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

const int mxn = 1e5+10;
int d[mxn];
int v[mxn];
int n;

ld f(ld k){
	ld ans =0.0;
	fo(i,n){
		ld dist = abs(k-d[i]);
		ld velo = v[i];
		ans = max(ans,dist/velo);
	}
	return ans;
}

int32_t main(){
	NINJA;
	cin >> n;
	fo(i,n) cin >> d[i];
	fo(i,n) cin >> v[i];
	ld l=1,r=1000000000;
	while((r-l)>0.00000001){
		ld m1 = l+(r-l)/3;
		ld m2 = r-(r-l)/3;
		if(f(m1) > f(m2)){
			l = m1;
		}else r = m2;
	}
	cout << fixed << setprecision(8) << f(l) << endl;
	
	return 0;
}