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

int m1[26],m2[26],m3[26];


int32_t main(){
	NINJA;

	int _; cin >> _;
	while(_--){
		memset(m1,0,sizeof(m1));
		memset(m2,0,sizeof(m2));
		memset(m3,0,sizeof(m3));

		string s,t,p; cin >> s >> t >> p;

		// for(char c : s) m1[c-'a']++;
		// for(char c : t) m2[c-'a']++;
		// for(char c : p) m3[c-'a']++;

		// bool ok = 1;

		// fo(i,26){
		// 	if(m1[i]+m3[i] < m2[i]){
		// 		ok = 0;
		// 		break;
		// 	}
		// }

		// if(ok) cout << "yes" << endl;
		// else cout << "no" << endl;
		bool ok =1;
		int n = sz(t);
		int m = sz(s);

		fo(i,n){
			// if(i<m) if(s[i]==t[i]) continue;
			// else if(p.find(t[i])==string::npos){
			// 	ok = 0;
			// 	break;
			// }else{
			// 	int idx = p.find(t[i]);
			// 	s += t[i];
			// 	p.erase(idx,1);
			// }
			if(s.find(t[i])==string::npos){
				if(p.find(t[i])==string::npos){
					ok = 0;
					break;
				}else{
					int idx = p.find(t[i]);
					s += t[i];
					p.erase(idx,1);
				}
			}else{
				int idx = s.find(t[i]);
				s.erase(idx,1);
			}

		}
		cout << s << " ";
		if(ok) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	
	return 0;
}