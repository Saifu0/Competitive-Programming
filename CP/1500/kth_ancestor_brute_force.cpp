#include<bits/stdc++.h>
using namespace std;

const int mxn = 2e5+10;
vector<int> tree[mxn];
int parent[mxn];

int find_kth_ancestor(int node,int k){
	if(k==0) return node;
	if(node==-1) return node;
	return find_kth_ancestor(parent[node],k-1);
}

void dfs(int v, int p){
	parent[v] = p;
	for(int u : tree[v]){
		if(parent[u]==0){
			dfs(u,v);
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

	parent[1] = -1;
	dfs(1,-1);

	while(q--){
		int node,k;
		cin >> node >> k;
		cout << find_kth_ancestor(node,k) << endl;
	}
}