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

set<int> p[2];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		p[1].clear();
		p[0].clear();
		int n; cin >> n;
		string s; cin >> s;
		fo(i,n) p[s[i]-'0'].insert(i);
		int i=0,j=0;
		vi ans(n);
		int num = 1;
		while(!p[0].empty() and !p[1].empty()){
			int z;
			if(*p[1].begin() < *p[0].begin()){
				z = 1;
			}else{
				z = 0;
			}
			int cur = -1;
			while(1){
				auto it = p[z].lower_bound(cur);
				if(it==p[z].end()) break;
				int k = *it;
				cur = k;
				p[z].erase(cur);
				ans[cur] = num;
				z = 1-z;
			}
			num++;
		}
		while(!p[1].empty()){
			int k = *p[1].begin();
			p[1].erase(p[1].begin());
			ans[k] = num++;
		}
		while(!p[0].empty()){
			int k = *p[0].begin();
			p[0].erase(p[0].begin());
			ans[k] = num++;
		}
		cout << num-1 << endl;
		for(int i : ans) cout << i << " ";
		cout << endl;
	}
	
	return 0;
}