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

const int mx = 2e5+50;

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		
		map<int,int> m;

		int mxn = -inf;
		fo(i,n){
			int x; cin >> x;
			m[x]++;
			mxn = max(mxn,x);
		}

		int ans = 0;
		int nxt = 0;

		fo(i,mxn+1){
			int x = m[i];
			if(x==0) continue;

			ans += x/i;
			int l = x%i;
			ans += (l+nxt)/i;
			nxt = (l+nxt)%i;
		}

		cout << ans << endl;

	}
	
	return 0;
}