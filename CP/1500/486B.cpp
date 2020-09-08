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

	int n; cin >> n;
	vector<string> a(n);
	fo(i,n) cin >> a[i];
	set<int> ans;
	vector<string> aa(n);
	fo(i,n){
		int cnt = 0;
		fo(j,n){
			if(a[j].find(a[i])!=string::npos) cnt++;
		}
		int c = cnt;
		while(ans.find(c)!=ans.end()){
			c--;
		}
		ans.insert(c);
		if(c<1){
			cout << "NO" << endl;
			return 0;
		}
		aa[c-1] = a[i];
	}
	bool ok = 1;
	int j = 1;
	for(auto i : ans){
		ok &= (i==j++);
	}
	if(ok){
		cout << "YES" << endl;
		reverse(aa.begin(), aa.end());
		for(auto each : aa) cout << each << endl;
	}else{
		cout << "NO" << endl;
	}


	return 0;
}