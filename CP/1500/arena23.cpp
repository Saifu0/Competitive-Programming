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

	vector<string> s;
	int k; cin >> k;

	fo(i,k){
		string ss; cin >> ss;
		s.pb(ss);
	}

	int n; cin >> n;

	fo(i,n){
		

		string ss;
		cin >> ss;
		bool f = 0;
		//cout << ss << endl;
		for(auto j : s){
			if(j==ss){
				f = 1;
				break;
			}
		}
		char ch = ss[0]-32;
		if(!f) cout << ch;
		if(!f && i!=n-1) cout << ".";
		//if(!f) ans += (ss[0]-32) + ".";
	}

	//cout << ans << endl;

	
	return 0;
}