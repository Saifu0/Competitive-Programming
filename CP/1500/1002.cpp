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

vector<string> b;
vector<pair<string,int>> ans;
string s; 

void solve(int i, int n, string ss, int cnt){
	if(ss==s){
		ans.pb({ss,cnt});
	}

	if(i>=n) return;


	solve(i+1,n,ss+b[i],cnt+1);
	solve(i+1,n,ss,cnt);
}


int32_t main(){
	NINJA;
	map<char,char> m;
	m['j'] = '1';
	m['i'] = '1';
	m['a'] = '2';
	m['b'] = '2';
	m['c'] = '2';
	m['d'] = '3';
	m['e'] = '3';
	m['f'] = '3';
	m['h'] = '4';
	m['g'] = '4';
	m['k'] = '5';
	m['l'] = '5';
	m['n'] = '6';
	m['m'] = '6';
	m['p'] = '7';
	m['r'] = '7';
	m['s'] = '7';
	m['t'] = '8';
	m['u'] = '8';
	m['v'] = '8';
	m['w'] = '9';
	m['x'] = '9';
	m['y'] = '9';
	m['q'] = '0';
	m['o'] = '0';
	m['z'] = '0';

	
	while(true){
		int n;
		cin >> s;
		if(s=="-1") return 0;
		cin >> n;
		ans.clear();
		b.clear();

		vector<string> a(n);
		fo(i,n) cin >> a[i];

		
		for(string it : a){
			string ans = "";
			for(char c : it){
				ans += m[c];
			}
			b.pb(ans);
		}

		// for(auto it : b){
		// 	cout << it << " ";
		// }
		// cout << endl;

		// vector<string> subs;

		// int len = sz(s);

		// fo(i,len){
		// 	for(int j=i;j<len;j++){
		// 		string stt = s.substr(i,j);
		// 		subs.pb(stt);
		// 	}
		// }

		// cout << sz(subs) << endl;
		// for(string it : subs)cout << it << " ";
		// cin >> n;
		string ss = "";
		solve(0ll,sz(b),ss,0ll);

		for(auto it : ans){
			cout << it.F << " " << it.S << endl;
		}
	}

	

	
	return 0;
}