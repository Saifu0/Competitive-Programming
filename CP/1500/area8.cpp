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

const int mxn = 1e5+50;
int a[mxn];
int Left[mxn];
int Right[mxn];


int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		fo(i,n) cin >> a[i+1];
		
		fo(i,n) Left[i+1] = max(Left[i],a[i+1]);
		for(int i=n;i>=1;i--) Right[i] = max(Right[i+1],a[i]);

		//fo(i,n) cout << Left[i+1] << " " << Right[i+1] << endl;
		int ans = 0;
		for(int i=2;i<n;i++){
			ans += max(0ll,min(Left[i-1],Right[i+1])-a[i]);
			ans %= mod;
		}
		cout << ans << endl;
	}
	
	return 0;
}