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
		int n,m,x,y; cin >> n >> m >> x >> y;

		string s[n+1];

		fo(i,n) cin >> s[i];

		int ans = 0;
		int spc = 0;
		fo(i,n){
			fo(j,m){
				if(s[i][j]=='.' && s[i][j+1]=='.'){
					if(2*x <= y) ans += 2*x;
					else ans += y;
					s[i][j] = '*';
					s[i][j+1] = '*';
				}else if(s[i][j]=='.'){
					ans += x;
					s[i][j] = '*';
				}
			}

		}

		cout << ans << endl;

		//if(cnt*x <= cnt*)
	}
	
	return 0;
}