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

	int t; cin >> t;
	vector<pair<int,pair<int,int>>> p;
	fo(i,t){	
		int n; cin >> n;
		vi a(n);
		fo(j,n) cin >> a[j];
		int sum = accumulate(a.begin(), a.end(),0);
		fo(j,n) p.pb({sum-a[j],{i,j}});
	}
	sort(p.begin(), p.end());
	fo(i,sz(p)-1){
		if((p[i].F==p[i+1].F) && (p[i].S.F!=p[i+1].S.F)){
			cout << "YES" << endl;
			cout << p[i].S.F+1 << " " << p[i].S.S+1 << endl;
			cout << p[i+1].S.F+1 << " " << p[i+1].S.S+1 << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	
	return 0;
}