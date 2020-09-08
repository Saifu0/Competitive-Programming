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
	freopen("whereami.in", "rt", stdin);
	freopen("whereami.out", "wt", stdout);
	int n; cin >> n;
	string s; cin >> s;
	int mn = inf;
	for1(i,100){
		set<string> a;
		bool f = 0;
		for(int j=0;j<=n-i;j++){
			if(a.count(s.substr(j,i))>0){
				f = 1;
				break;
			}
			a.insert(s.substr(j,i));
		}
		if(f==0) {
			mn = i;
			break;
		}
	}
	cout << mn << endl;
	
	return 0;
}