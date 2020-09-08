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

const int mxn = 2e5+10;
vi a[mxn];

int32_t main(){
	NINJA;
	int n; cin >> n ;
	int m =0;
	fo(i,n){
		int x; cin >> x;
		int l = 0, r = m;
		while(l<=r){
			int mid = (l+r)/2;
			if(a[mid].back() < x) r = mid;
			else l = mid+1;
		}
		a[l].pb(x);
		m = max(m,l+1);
	}
	fo(i,m){
		fo(j,sz(a[i])){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}