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

int32_t main(){
	NINJA;
	
	int _; cin >> _;
	while(_--){
		int n; cin >> n;
		string s,t; cin >> s >> t;

		bool ok = 1;
		vii ans;
		fo(i,n){
			
			if(s[i]!=t[i]){
				bool f = 0;
				for(int j=i+1;j<n;j++){
					if(s[i]==s[j]){
						f = 1;
						swap(s[j],t[i]);
						ans.pb({j+1,i+1});
						break;
					}
				}
				if(f) continue;
				for(int j=i+1;j<n;j++){
					if(t[i]==t[j]){
						f = 1;
						swap(t[j],s[i]);
						ans.pb({i+1,j+1});
						break;
					}
				}
				if(f) continue;
				for(int j=i+1;j<n;j++){
					if(s[i]==t[j]){
						swap(s[n-1],t[j]); ans.pb({n,j+1});
						swap(s[n-1],t[i]); ans.pb({n,i+1});
						f = 1;
						break;
					}
				}
				if(f) continue;
				for(int j=i+1;j<n;j++){
					if(t[i]==s[j]){
						swap(t[n-1],s[j]); ans.pb({j+1,n});
						swap(t[n-1],s[i]); ans.pb({i+1,n});
						f =1;
						break;
					}
				}
				if(f) continue;
				if(!f){
					ok = 0;
					break;
				} 
			}
			
		}
		if(ok){
			cout << "Yes" << endl;
			cout << sz(ans) << endl;
			for(auto i : ans) cout << i.F << " " << i.S << endl;
		}else{
			cout << "No" << endl;
		}
	}

	return 0;
}