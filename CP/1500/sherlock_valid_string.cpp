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

	string s; cin >> s;

	unordered_map<char,int> m;
	for(char i : s){
		m[i]++;
	}

	int mx = -inf;
	mp mm;

	for(auto i : m){
		mm[i.S]++;
	}

	for(auto i : mm) cout << i.F << " " << i.S << endl;
	// sort(a.begin(), a.end());
	mx = abs(mm.begin()->F-mm.rbegin()->F);

	bool f = 1;

	if(sz(mm)==2){
		if(mm.begin()->S!= 1 && mm.rbegin()->S!=1){
			f = 0;
		}
	}

	if(sz(mm)>2 || mx > 1 || !f) cout << "NO" << endl;
	else cout << "YES" << endl;

	
	
	return 0;
}