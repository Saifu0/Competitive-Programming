#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 1e5 + 500;
int in[mxn];
int out[mxn];
int t = 0;
bool vis[mxn] = {};

void dfs(int v){
	vis[v] = true;
	in[v] = ++t;

	for(auto u : g[v]){
		if(!vis[u]) dfs(u);
	}

	out[v] = ++t;
}

int main(){
	NINJA;

	return 0;
}