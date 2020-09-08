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

	int p,q,l,r; cin >> p >> q >> l >> r;
	int ans =0;
	vii a(p),b(q);
	fo(i,p) cin >> a[i].F >> a[i].S;
	fo(i,q) cin >> b[i].F >> b[i].S;

	for(int i=l;i<=r;i++){
		bool ok = 0;
		fo(j,p){
			fo(k,q){
				int x = b[k].F + i;
				int y = b[k].S + i;
				if(!(x > a[j].S || y < a[j].F)){
					ans++;
					ok = 1;
					break;
				}
			}
			if(ok) break;
		}
	}
	cout << ans << endl;
	
	return 0;
}