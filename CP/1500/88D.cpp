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

const int mxn = 1e5+10;
int a[mxn];
int mx[mxn];
int pref[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;
	fo(i,n){
		cin >> a[i+1];
		mx[i+1] = max(mx[i],a[i+1]);
		pref[i+1] = pref[i] + a[i+1];
	}

	int mx_el = 0;
	int cur = -inf;
	int j = 1;
	Fo(i,1,n+1){
		mx_el += a[i];
		if(mx_el < 0){
			mx_el = 0;
		}
		if(mx_el > cur){
			cur = mx_el;
		}
		pref[i] = cur - mx[i];
	}
	int ans = -inf;
	Fo(i,1,n+1){
		ans = max(ans,pref[i]);
	}

	if(ans<0) cout << 0 << endl;
	else cout << ans << endl;


	
	return 0;
}
