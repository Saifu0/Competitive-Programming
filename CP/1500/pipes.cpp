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
		int n; cin >> n;
		string s[2];
		cin >> s[0] >> s[1];

		int pos = 0,row = 0;

		for(pos=0;pos<n;pos++){
			if(s[row][pos] >= '3'){
				if(s[row^1][pos] < '3') break;
				else row ^= 1;
			}
		}

		if(pos == n && row==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}