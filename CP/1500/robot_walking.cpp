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

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		string s; cin >> s;

		map<ii,int> m;
		ii cur = {0,0};
		int l=-1,r=n;
		m[cur] = 0;
		fo(i,n){
			if (s[i] == 'L') --cur.first;
			if (s[i] == 'R') ++cur.first;
			if (s[i] == 'U') ++cur.second;
			if (s[i] == 'D') --cur.second;

			if(m.count(cur)){
				if(i-m[cur]+1 < r-l+1){
					l=m[cur];
					r=i;
				}
			}
			m[cur] = i+1;
		}

		if(l==-1) cout << -1 << endl;
		else cout << l+1 << " " << r+1 << endl;

	}
	
	return 0;
}