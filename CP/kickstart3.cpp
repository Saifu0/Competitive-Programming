#include<bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first

#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
const int mxn = 1e5+5;
int n,k; 
int a[mxn];

bool check(int d){
	int tot = 0;
	fo(i,n-1) tot += (a[i+1]-a[i]-1)/d;
	if(tot<=k) return true;
	return false;
}

int bin_search(int lo, int hi){
	while(lo<hi){
		int m = (lo+hi)/2;
		if(check(m)) hi = m;
		else lo = m + 1;
	}
	return lo;
}

int main(){
	c_p_c();

	int t; cin >> t;
	int start = 1;
	while(t--){
		cin >> n >> k;
		fo(i,n) cin >> a[i];

		int ans = bin_search(1,1e9);
		cout << "Case #" << start++ << ": " << ans << endl;
	}



	return 0;
}

