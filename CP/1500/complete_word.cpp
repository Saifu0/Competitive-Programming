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
	int n = sz(s);

	bool ok = 0;
	for(int i=0;i<n-25ll;i++){
		map<char,int> m;
		int cnt = 0;
		for(int j=i;j<i+26;j++){
			if(s[j]=='?') cnt++;
			else m[s[j]]++; 
		}

		// if(cnt==0){
		// 	ok = 1;
		// 	break;
		// }else{
		// cout <<cnt << " " << sz(m) << endl;
		int len = sz(m);
		if(26ll-cnt==len){
			ok = 1;
			for(int j=i;j<i+26;j++){
				if(s[j]=='?'){
					for(char a='A';a<='Z';a++){
						if(m.find(a)==m.end()){
							s[j] = a;
							m[a]++;
							break;
						}
					}
				}
			}
			break;
		}
		// }
	}

	if(ok){
		fo(i,n) s[i] = (s[i] == '?' ? 'A' : s[i]);
		cout << s << endl;
	}else{
		cout << -1 << endl;
	}
	
	return 0;
}