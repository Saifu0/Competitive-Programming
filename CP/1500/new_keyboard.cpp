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

	string ans = "";
	string temp = "";

	bool ok = 1;

	for(char c : s){
		if(c!='*' && c!='<' && c != '>'){
			if(ok) ans += c;
			else temp += c;
			continue;
		}

		if(c=='*'){
			ans.erase(sz(ans)-1,1);
		}else if(c=='<'){
			if(!ok){
				ans = temp + ans;
				temp.clear(); 
			}
			ok = false;
		}else{
			if(!ok){
				ans = temp + ans;
				temp.clear();
			}
			temp.clear();
			ok = true;
		}
	}

	cout << ans << endl;
	
	return 0;
}