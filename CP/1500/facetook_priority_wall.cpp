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

	string s; cin >> s;
	int n; cin >> n;
	map<string,int> m;
	vector<string> v;
	string st;
	getline(cin,st);
	fo(i,n){
		string a;
		string name1 = "", name2 = "";
		int point = 0;
		getline(cin,st);
		stringstream s(st);
		v.clear();
		string temp;
		while(s >>temp){
			v.pb(temp);
		}
		a = v[1];
		if(a=="posted") point = 15;
		if(a=="commented") point =  10;
		if(a=="likes") point = 5;

		name1 = v[0];
		name2 = v[sz(v)-2];
		if(name2[sz(name2)-2]=='\'') name2 = name2.substr(0,sz(name2)-2);
		m[name1] += point;
		m[name2] += point;
	}
	vector<pair<int,string>> ans;
	for(auto each : m) ans.pb({-1*each.S,each.F});
	sort(ans.begin(), ans.end());

	for(auto each : ans){
		if(each.S==s) continue;
		cout << each.S << endl;
	}
	
	return 0;
}