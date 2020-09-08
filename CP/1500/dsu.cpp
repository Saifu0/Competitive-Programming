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

const int mxn = 1e5+10;
int parent[mxn];
int rank_[mxn];

int findX(int a){
	if(parent[a]==a) return a;
	else{
		return findX(parent[a]);
	}
}

/* Path compression */
int find_(int a){
	if(parent[a] <0 ) return a;
	return parent[a] = find_(parent[a]);
}

void unionX(int a, int b){
	a = find_(a);
	b = find_(b);
	if(a==b) return;
	else parent[a] = b;
}

/*Union by rank_ */
void union_(int a,int b){
	a = find_(a);
	b = find_(b);
	
	if(a==b) return;
	
	if(rank_[a] > rank_[b]){
		parent[b] = a;
		rank_[a] += rank_[b];
	}else{
		parent[a] = b;
		rank_[b] += rank_[a];
	}
}

int32_t main(){
	NINJA;
	
	int n; cin >> n;
	for1(i,n){
		parent[i] =-1,rank_[i] = 1;
	}
	
	int m; cin >> m;
	while(m--){
		int x,y; cin >> x >> y;
		unionX(x,y);
	}
	
	for1(i,n){
		int x; cin >> x;
		cout << find_(x) << endl;
	}
	
	for1(i,n){
		cout << parent[i] << " ";
	}
	
	return 0;
}

