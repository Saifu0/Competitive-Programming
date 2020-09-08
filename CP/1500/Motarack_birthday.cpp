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

const int mxn = 1e5+500;
int a[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		fo(i,n) cin >> a[i];

		int mn = inf, mx = -inf;

		fo(i,n){
			if(i>0 && a[i]==-1 && a[i-1]!=-1){
				mn = min(a[i-1],mn); mx = max(mx,a[i-1]);
			}
			if(i<n-1 && a[i]==-1 && a[i+1]!=-1){
				mn = min(a[i+1],mn), mx = max(mx,a[i+1]);
			}
		}

		int ans = (mn+mx)/2;
		mx = -inf;
		fo(i,n){
			if(a[i]==-1) a[i] = ans;
			if(i) mx = max(mx,abs(a[i]-a[i-1]));
		}

		cout << mx << " " << ans << endl;
	}
	
	return 0;
}