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

const int mxn = 50;
set<int> g[mxn];
bool vis[mxn];
vi c;

bool dfs(int v, int p){
	vis[v] = 1;
	c.pb(v); 

	for(int u : g[v]){
		if(!vis[u]){
			if(dfs(u,v)) return true;
		}else{
			if(u!=p) return true;
		}
	}
	return false;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = sz(s);

		fo(i,27) g[i].clear(), vis[i] = 0;
		c.clear();

		fo(i,n-1){
			g[s[i]-'a'].insert(s[i+1]-'a');
			g[s[i+1]-'a'].insert(s[i]-'a');
		}



		if(!dfs(s[0]-'a',-1)){
			cout << "YES" << endl;
			for(int i=0;i<26;i++){
				bool f = 1;
				for(int ch : c){
					if(ch==i){
						f = 0;
						break;
					}
				}
				if(f) c.pb(i);
			}

			for(int i : c){
				char ch = i + 'a';
				cout << ch;
			}
			cout << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}