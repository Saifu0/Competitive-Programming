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
int a[mxn];
int n;
int tree1[4*mxn];
int tree2[4*mxn];
int check[mxn];

void build(int l, int r, int i){
	if(l==r){
		tree1[i] = a[l];
		tree2[i] = a[l];
		return;
	}

	int m = (l+r)/2;
	build(l,m,2*i);
	build(m+1,r,2*i+1);

	tree1[i] = min(tree1[2*i],tree1[2*i+1]);
	tree2[i] = max(tree2[2*i],tree2[2*i+1]);
}

int queryMn(int l, int r, int i, int se, int ed){
	if(se > r || ed < l) return inf;
	if(se <= l and ed >= r) return tree1[i];

	int m = (l+r)/2;
	int a = queryMn(l,m,2*i,se,ed);
	int b = queryMn(m+1,r,2*i+1,se,ed);

	return min(a,b); 
}

int queryMx(int l, int r, int i, int se, int ed){
	if(se > r || ed < l) return 0;
	if(se <= l and ed >= r) return tree2[i];

	int m = (l+r)/2;
	int a = queryMx(l,m,2*i,se,ed);
	int b = queryMx(m+1,r,2*i+1,se,ed);

	return max(a,b); 
}

int solve(){
	int ans = 0;	

	fo(i,n){
		check[a[i]]
	}
}

int32_t main(){
	NINJA;

	cin >> n;
	fo(i,n) cin >> a[i];

	build(0,n-1,1);

	int mx = 1;
	int i= 0 ;
	int j = i+1;

	while(j < n){
		int maxi = queryMx(0,n-1,1,i,j);
		int mini = queryMn(0,n-1,1,i,j);

		// cout << maxi << " " << mini << endl;

		if(abs(maxi-mini) <= 1){
			mx = max(mx,j-i+1);
		}else{
			i++;
			if(j>i) j--;
		}
		j++;
	}
	cout << mx << endl;
		
	return 0;
}