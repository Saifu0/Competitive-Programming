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
		int s; cin >> s; 
		string n = to_string(s);
		bool f = 0, g = 0;
		fo(i,sz(n)){
			if(n[i]=='2' && n[i+1]=='1') f = 1,g=1;
		}

		if((f&&g) || s%21==0) cout << "The streak is broken!" << endl;
		else cout << "The streak lives still in our heart!" << endl;
	}
	
	return 0;
}