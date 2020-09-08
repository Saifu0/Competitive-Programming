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

const int mxn = 1e5+500;
vi g[mxn];
vector<bool> vis(mxn,false);
int col[mxn];

bool bipartite(int v, int c){
	vis[v] = true;
	col[v] = c;

	for(auto u : g[v]){
		if(!vis[v]){
			if(bipartite(u,c^1)==false) return false;
		}else{
			if(col[v]== col[u]) return false;
		}
	}


	return true;
}

int main(){
	NINJA;


	if(bipartite(0,0)){
		cout << "It is a bipartite graph" << endl;
	}else{
		cout << "No its not" << endl;
	}

	return 0;
}