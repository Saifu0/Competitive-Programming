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
		string a; cin >> a;
		int n = sz(a);

		vi s;
		
		for(string t : {"twone", "one" , "two"}){
			for(size_t pos = 0;(pos= a.find(t,pos))!=string::npos;){
				a[pos + sz(t)/2] = '$';
				s.pb(pos + sz(t)/2 +1);
			}
		}

		cout << sz(s) << endl;
		for(int i : s) cout << i << " ";
		cout << endl;
	}
	
	return 0;
}