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

typedef priority_queue<ii,vii,greater<ii>> pq;

const int mxn = 1e5+500;
int n,m,k;

int32_t main(){
	NINJA;

	cin >> n >> m >> k;

	vii g[n+1];

	fo(i,m){
		int f,s,w; cin >> f >> s >> w;
		--f,--s;
		g[f].pb({w,s});
	}

	pq q;

	q.push({0,0});
	vi b(n,0);

	int cnt = 0;

	while(!q.empty()){
		int w,u;
		tie(w,u) = q.top();
		q.pop();

		if(b[u]>k) continue;
		if(u==n-1){
			cnt++;
			cout << w << " ";
			if(cnt==k) break;
		}

		b[u]++;

		for(auto it : g[u]){
			int x,v;
			tie(x,v) = it;
			if(b[v]>k) continue;
			q.push({x+w,v});
		}
	}

	
	return 0;
}