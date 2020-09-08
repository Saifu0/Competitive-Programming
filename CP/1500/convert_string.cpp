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

int n;
string a,b;

void solve(){
	vector<vi> ans;

	fo(i,n){
		if(a[i] < b[i]){
			cout << -1 << endl;
			return;
		}
	}

	for(char c='z';c>='a';c--){
		vi p;
		bool ok = 0;

		fo(i,n){
			if(b[i]==c && c!=a[i]){
				p.pb(i);
			}
		}

		if(!ok && !p.empty()){
			fo(i,n){
				if(a[i]==c){
					p.pb(i);
					ok = 1;
				}
			}
		}

		if(!ok && !p.empty()){
			cout << -1 << endl;
			return;
		}

		if(!p.empty()) ans.pb(p);

		for(int ch : p){
			a[ch] = c;
		}
	}

	cout << sz(ans) << endl;
	for(auto v : ans){
		cout << sz(v) << " ";
		for(int i : v) cout << i << " ";
		cout << endl;
	}
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> n >> a >> b;
		solve();
	}
	
	return 0;
}