#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

struct graph {
	int a,b,c;
};



const int mxn = 2567;
vector<graph> g;
int n,m;

void solve(){
	vi d(mxn);
	vi p(mxn,-1);
	
	int x;
	for(int i=1;i<=n;i++){
		x = -1;
		for(auto u : g){
			if(d[u.a] + u.c < d[u.b]){
				d[u.b] = d[u.a] + u.c;
				p[u.b] = u.a;
				x = u.b;
			}
		}
	}
	if(x==-1){
		cout << "NO" << endl;
		return;
	}else{
		vi cyc;
		for(int i=1;i<=n;i++) x = p[x];
		for(int v=x;;v=p[v]){
			cyc.pb(v);
			if(v==x && cyc.size()>1) break;
		}
		
		reverse(cyc.begin(),cyc.end());
		
		cout << "YES" << endl;
		for(auto i : cyc) cout << i << " ";
		cout << endl;
	}
}

int32_t main(){
	NINJA;
	
	cin >> n >> m;
	fo(i,m){
		int f,s,w; cin >> f >> s >> w;
		g.pb({f,s,w});
	}
	
	solve();

	return 0;
}

