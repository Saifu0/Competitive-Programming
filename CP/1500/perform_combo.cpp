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

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		string s; cin >> s;
		map<char,int> m;
		fo(i,n){
			m[s[i]]++;
		}
		vi ans(n+1,0);
		fo(i,k){
			int x; cin >> x;
			ans[0]++;
			ans[x]--;
		}
		// fo(i,n) cout << ans[i] << " ";
		// cout << endl;
		for1(i,n) ans[i] += ans[i-1];
		fo(i,n){
			m[s[i]] += ans[i];
		}
		for(char c='a';c<='z';c++) cout << m[c] << " ";
		cout << endl;
	}
	
	return 0;
}