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
int a[mxn],h[mxn];
int n,q;

int find_max(int l, int r){
	int dp1[n+10] = {0};
	dp1[l] = a[l];
	bool f = 0, g = 0;
	int oc1 = 0, oc2 = 0;
	for(int i=l+1;i<=r;i++){
		if(h[i] > h[i-1]){
			// g = 0;
			dp1[i] = max(dp1[i-1]+a[i],dp1[i]);
		}else{
			dp1[i] = dp1[i-1];
			// if(g==0){
				// g =1;
				oc1 = dp1[i];
			// }
		}
	}
	cout << oc1 << " ";
	int dp2[n+10] = {0};
	dp2[l] = a[l];
	for(int i=l+1;i<=r;i++){
		if(h[i] < h[i-1]){
			f = 0;
			dp2[i] = max(dp2[i-1]+a[i],dp2[i]);
		}else{
			dp2[i] = dp2[i-1];
			// if(f==0){
				// g = 1;
				oc2 = dp2[i];
			// }
		}
	} 
	cout << oc2 << endl;
	return (oc1==dp1[r]&&oc2==dp2[r] ? -1 : max(dp2[r],dp1[r]));
}

int32_t main(){
	NINJA;

	cin >> n >> q;
	for1(i,n) cin >> h[i];
	for1(i,n) cin >> a[i];

	while(q--){
		int t,l,r; cin >> t >> l >> r;
		if(t==1){
			a[l] = r;
		}else{
			if(l==r){
				cout << a[l] << endl;
				continue;
			}
			if(l>r){
				swap(l,r);
			}
			int ans = find_max(l,r) ;
			// cout << ans << endl;
		}
	}
	
	return 0;
}