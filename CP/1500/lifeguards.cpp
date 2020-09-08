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

const int mxn = 1010;

int32_t main(){
	NINJA;
	freopen("lifeguards.in", "rt", stdin);
	freopen("lifeguards.out", "wt", stdout);
	int n; cin >> n;
	vi x(n),y(n);
	fo(i,n) cin >> x[i] >> y[i];
	int best = 0;
	fo(i,n){
		int a[mxn] = {0};
		fo(j,n){
			if(i==j) continue;
			for(int k=x[j]+1;k<=y[j];k++) a[k]=1;
		}
		int cnt = 0;
		for1(k,mxn) cnt += a[k];
		best = max(best,cnt);
	}
	cout << best << endl;
	
	return 0;
}