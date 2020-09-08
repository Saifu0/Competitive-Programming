// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define all(a) a.begin(),a.end()
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
		string s,p,t; cin >> s >> p >> t;

		map<char,int> m;

		int i=0,j=0;
		while(i<sz(s) and j<sz(p)){
			if(s[i]==p[j]){
				i++,j++;
				continue;
			}
			m[p[j]]++;
			j++;
		}
		if(i!=sz(s)){
			cout << "NO" << endl;
			continue;
		}
		for(int i=j;i<sz(p);i++) m[p[i]]++;
		map<char,int> f;
		for(char c : t) f[c]++;
		
	
		bool ok = 1;
		for(auto it : m){
			ok &= (f[it.first]>=it.second);
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    
    return 0;
}
	