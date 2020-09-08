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

const int mxn = 5e4+10;

struct edge {
	string a,b;
	int w;
} ar[mxn];

int n,m;

bool cmp(edge x, edge y){
	return x.w < y.w;
}

map<string,string> parent;
map<string,int> rank_;

string find_(string x){
	if(parent[x]==x) return x;
	return parent[x] = find_(parent[x]);
}

void union_(string x, string y){
	x = find_(x);
	y = find_(y);

	if(x==y) return;
	else parent[x] = y;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cout << "\n";
		parent.clear();
		rank_.clear();
		cin >> n >> m;
		fo(i,m){
			cin >> ar[i].a >> ar[i].b >> ar[i].w;
			parent[ar[i].a] = ar[i].a;
			parent[ar[i].b] = ar[i].b;
		}
		sort(ar,ar+m,cmp);

		int sum = 0;
		int c = 0;
		fo(i,m){
			string a = find_(ar[i].a);
			string b = find_(ar[i].b);
			if(a!=b){
				union_(a,b);
				sum += ar[i].w;
				c++;
			}
			if(c==n-1) break;
		}
		cout << sum << endl;	
	}

	
	return 0;
}