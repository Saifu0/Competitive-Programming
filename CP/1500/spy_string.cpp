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
		int n,k; cin >> n >> k;
		string a[n];

		fo(i,n){
			cin >> a[i];
		}

		string ans = "";
		fo(i,k){
			//bool ok = true;
			set<char> s;
			Fo(j,0,n){
				s.insert(a[j][i]);
			}
			if(sz(s)==1) ans += *s.begin();
		}
		if(k-sz(ans)>2){
			cout << -1 << endl;
			continue;
		}
		if(k-sz(ans)==2){

		}
		else if(k-sz(ans)==1){
			set<char> s;
			fo(i,n) s.insert(a[i][0]);
			if(sz(s)==1) ans += a[i][k-1];
			else ans = a[i][0] + ans;

			cout << ans << endl;
		}
		else cout << ans << endl;
	}
	
	return 0;
}