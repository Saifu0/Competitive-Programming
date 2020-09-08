// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

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

const int mxn = 1010;
int a[mxn];
int n,w;

bool check1(int k){
	for1(i,n){
		k += a[i];
		if(k<0) return 0;
	}
	return 1;
}

bool check2(int k){
	for1(i,n){
		k += a[i];
		if(k>w) return 0;
	}
	return 1;
}

int bin2(int l, int r){
	while(l<r){
		int m = (l+r+1)/2;
		if(check2(m)) l = m;
		else r=m-1;
	}
	return l;
}

int bin1(int l, int r){
	while(l<r){
		int m = (l+r)/2;
		if(check1(m)) r = m;
		else l = m+1;
	}
	return l;
}

int32_t main(){
	NINJA;

	cin >> n >> w;
	for1(i,n) cin >> a[i];
	int mn = bin1(0,w);
	int mx = bin2(0,w);

	if(!check1(mn) or !check2(mn) or !check1(mx) or !check2(mx)){
		cout << 0 << endl;
		return 0;
	}
	cout << mx-mn+1 << endl;
	
	return 0;
}