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
	int start=1;
	while(t--){
		int e,n;  cin >> e >> n;
		string s; cin >> s;

		int f = false;
		int cnt = 0;
		fo(i,sz(s)){
			
			if(s[i]=='N') n +=1;
			if(s[i]=='S') n -=1;

			if(e>0) e-=1;
			cnt++;
			if(e==n){
				f = true; break;
			}
		}

		if(f){
			cout << "Case #" << start++ << ": " << cnt << endl;
		}else{
			cout << "Case #" << start++ << ": IMPOSSIBLE" << endl;
		}
	}
	
	return 0;
}