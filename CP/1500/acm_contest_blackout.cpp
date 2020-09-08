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
bool vis[mxn];
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

pair<int,vector<edge>> getMst(edge x){
	vector<edge> temp;
	for1(i,m){
		if(g[i].a !=x.a && g[i].b!=x.b && g[i].w != x.w) temp.pb(g[i]);
	}
	vector<edge> res;
	int sum = 0;
	fo(i,sz(temp)){
		a = find_(temp[i].a);
		b = find_(temp[i].b);
		
		if(a!=b){
			union_(a,b);
			sum += g[i].w;
			res.pb(temp[i]);
		}
	}
	
	return {sum,res};
	
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
		edge x;
		x.a = 0,x.b = 0,x.w = 0;
		pair<int,vector<edge>> mn = getMst(x);
		int sum = mn.F;
		
		int secondMx = inf;
		fo(i,sz(mn.S)){
			pair<int,vector<edge>> mx = getMst(mn.S[i]);
			secondMx = min(secondMx,mx.F);
		}
		
		cout << sum << " " << secondMx << endl;
	}
	
	return 0;
}
