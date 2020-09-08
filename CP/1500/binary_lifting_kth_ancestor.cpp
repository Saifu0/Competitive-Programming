#include<bits/stdc++.h>
using namespace std;

const int mxn = 2e5+10;
int up[mxn][20];
std::vector<int> tree[mxn];

void dfs(int v, int p){
	up[v][0] = p;
	for(int i=1;i<20;i++){
		if(up[v][i-1]!=-1) up[v][i] = up[up[v][i-1]][i-1];
		else up[v][i] = -1;
	}
	for(int child:tree[v]){
		if(child!=p) dfs(child,v);
	}
}

int find_kth_ancestor(int node, int jump){
	if(node==-1 || jump==0) return node;
	for(int i=19;i>=0;i--){
		if(jump >= (1<<i)){
			return find_kth_ancestor(up[node][i],jump-(1<<i));
		}
	}
}

int main(){
	int n,q;
	cin >> n >> q;
	for(int i=2;i<=n;i++){
		int v; cin >> v;
		tree[v].push_back(i);
		tree[i].push_back(v);
	}
	dfs(1,-1);
	while(q--){
		int node,jump;
		cin >> node >> jump;
		cout << find_kth_ancestor(node,jump) << endl;
	}
}