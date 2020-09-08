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
		string s; cin >> s;
		int n = sz(s);
		map<char,int> m;
		for(char c : s) m[c]++;
		int mx1 = 0;
		for(auto i : m) mx1 = max(mx1,i.S);
		int mn1 = n-mx1;
		for(int c=0;c<=9;c++){
			for(int cc=0;cc<=9;cc++){
				int cnt = 0;
				vector<char>req = {char(c+'0'),char(cc+'0')};
				int tog = 0;
				fo(i,n){
					if(req[tog]!=s[i]) cnt++;
					else tog ^= 1;
				}
				if((n-cnt)%2==1) cnt++;
				mn1 = min(mn1,cnt);
			}
			
		}
		cout << mn1 << endl;
	}
	
	return 0;
}