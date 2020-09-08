// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 100*100;

struct edge{
	int a,b,w;
};

edge g[mxn];
int par[100+10];
int rank_[100+10];
int n,m,a,b,w;

bool cmp(edge x,edge y){
	if(x.w <y.w) return true;
	else return false;
}

int find_(int x){
	if(par[x] == -1) return x;
	return par[x] = find_(par[x]);
}

void union_(int x,int y){
	a = find_(x);
	b = find_(y);
	if(a==b) return;
	
	if(rank_[a] > rank_[b]){
		rank_[a] += rank_[b];
		par[b] = a;
	}else{
		rank_[b] += rank_[a];
		par[a] = b;
	}
}

int32_t main(){
	NINJA;
		
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for1(i,n) par[i] = -1,rank_[i] = 1;
		
		for1(i,m){
			cin >> a >> b >> w;
			g[i].a = a,g[i].b = b, g[i].w = w;
		}
		
		sort(g,g+m,cmp);
			
		int sum = 0;
		for1(i,m){
			a = find_(g[i].a);
			b = find_(g[i].b);
			
			if(a!=b){
				union_(a,b);
				sum += g[i].w;
			}
		}
		
		cout << sum << endl;
	}
	
	return 0;
}
