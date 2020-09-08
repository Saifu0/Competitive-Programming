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

ii get(int n){
	int mx = 0, mn = 9;
	while(n>0){
		int r = n%10;
		n /= 10;
		mx = max(mx,r);
		mn = min(mn,r);
	}

	return {mx,mn};
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int prev = n;

		fo(i,k-1){
			ii a = get(prev);
			int nxt = prev + a.F*a.S;
			if(nxt==prev) break;
			prev = nxt;
		}

		cout << prev << endl;
	}
	
	return 0;
}