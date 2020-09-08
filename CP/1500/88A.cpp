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

const int mxn = 55;
int a[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,m,k; cin >> n >> m >> k;

		int tt = n/k;

		fo(i,n) a[i] = 0;

		if(tt >= m){
			cout << m << endl;
			continue;
		}

		int ex = m;

		int j = 1;
		int i=1;
		a[0] = tt;
		m -= tt;
		while(m>0){
			a[i]++;
			i++;
			m -= 1;
			//cout << m << " ";
			if(i==k) i = 1;
		}

		// fo(i,k) cout << a[i] << " ";
		// cout << endl;

		

		
		
			int mx = -inf;
			int idx = -1;
			fo(i,k) {
				if(mx< a[i]){
					mx = max(mx,a[i]);
					idx = i;
				}
			}
			int cnt = 0;
			fo(i,k){
				if(mx==a[i]) cnt++;
			}

			if(cnt >= 2){
				cout << 0 << endl;
				continue;
			}

			int mx2 = -inf;
			fo(i,k){
				if(i!=idx) mx2 = max(mx2,a[i]);
			}

			cout << mx - mx2 << endl;
			
		

	}
	
	return 0;
}