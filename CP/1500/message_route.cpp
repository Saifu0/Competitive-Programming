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


const int mxn = 2e5+500;
vi g[mxn];
int d[mxn];
int n,m;

int main(){
	NINJA;

	cin >> n >> m;

	fo(i,m){
		int f,s; cin >>f >> s;
		--f,--s;
		g[f].pb(s);
		g[s].pb(f);
	}

	//fo(i,n+1) d[i] = 0; 

	queue<int> q;
	q.push(0);

	d[0] = -1;

	while(!q.empty()){
		int u = q.front();
		q.pop();

		if(u==n-1) break;

		for(auto v : g[u]){
			if(!d[v]){
				d[v] = u+1;
				q.push(v);
			}
		}
	}

	if(!d[n-1]){
		cout << "IMPOSSIBLE" << endl; 
		return 0;
	}

	// for(int i=0;i<n;i++){
	// 	cout << d[i] << endl;
	// }

	vi r;

	int u = n;

	while(u>0){
		r.pb(u);
		u = d[u-1];
	}

	cout << sz(r) << endl;

	for(int i=r.size()-1;i>=0;i--){
		cout << r[i] << " ";
	}




	return 0;
}