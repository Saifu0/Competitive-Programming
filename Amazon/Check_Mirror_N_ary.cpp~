#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		vector<int> g1[n];
		vector<int> g2[n];

		for(int i=0;i<m;i++){
			int u,v; cin >> u >> v;
			--u,--v;
			g1[u].push_back(v);
		}

		for(int i=0;i<m;i++){
			int u,v; cin >> u >> v;
			--u,--v;
			g2[u].push_back(v);
		}

		for(int i=0;i<n;i++) reverse(g1[i].begin(),g1[i].end());
		
		bool ok =1;

		for(int i=0;i<n;i++){
			ok&=(g1[i]==g2[i]);
		}

		if(ok) cout << 1 << endl;
		else cout << 0 << endl;
	}
}

