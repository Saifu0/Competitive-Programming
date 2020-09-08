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

const int mxn = 123;
int tt[mxn],l[mxn],r[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int mn = m, mx = m;

		fo(i,n) cin >> tt[i] >> l[i] >> r[i];

		int prev = 0;
		bool f = 0;
		fo(i,n){
			//int t,l,r; cin >> t >> l >> r;
			mx += tt[i]-prev;
			mn -= tt[i]-prev;

			if(mx<l[i] || mn > r[i]){
				f = 1;
				break;
			}

			mx = min(r[i],mx);
			mn = max(l[i],mn);

			prev = tt[i];
		}

		if(f) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	
	return 0;
}