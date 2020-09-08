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

const int mxn = 10001;
vi g[mxn];
vector<bool> vis(mxn,false);
int dist[mxn];
vi prime;

bool isPrime(int n){
	for(int i=2;i*i<=n;i++)
		if(n%i==0) return false;

	return true;
}

bool isValid(int a, int b){
	int cnt = 0;

	while(a>0){
		if(a%10 != b%10) cnt++;
		a/=10, b /=10;
	}

	if(cnt==1) return true;
	else return false;
}

void build(){
	for(int i=1000;i<=9999;i++){
		if(isPrime(i)){
			prime.pb(i);
		}
	}

	for(int i=0;i<prime.size();i++){
		for(int j=i+1;j<prime.size();j++){
			int a = prime[i];
			int b = prime[j];
			if(isValid(a,b)){
				g[a].pb(b);
				g[b].pb(a);
			}
		}
	}
}

void bfs(int v){
	queue<int> q;
	q.push(v);

	vis[v] = true;
	dist[v] = 0;


	while(!q.empty()){
		int t = q.front();
		q.pop();

		for(int u: g[t]){
			if(!vis[u]){
				dist[u] = dist[t] + 1;
				vis[u] = true;
				q.push(u);
			}
		}
	}
}


int main(){
	NINJA;
	int t; cin >> t;
	build();

	while(t--){

		int a,b; cin >> a >> b;

		for(int i=1000;i<=9999;i++) vis[i] = false, dist[i] = -1;

		bfs(a);

		if(dist[b]==-1) cout << "Impossible" << endl;
		else cout << dist[b] << endl;
	}

	return 0;
}