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

const int mxn = 2010;
int point[mxn],key[mxn];
int n,k,p;
int cache[mxn][mxn];

// bool check(int m){
// 	multiset<int> a;
// 	for1(i,k) a.insert(key[i]);
// 	int cost  =0;
// 	for1(i,n){
// 		int mn = inf;
// 		int val = 0;
// 		for(int each : a){
// 			if(mn > (abs(each-point[i])+abs(each-p))){
// 				mn = (abs(each-point[i])+abs(each-p));
// 				val = each;
// 			}
// 		}
// 		a.erase(a.find(val));
// 		cost = max(mn,cost);
// 	}
// 	return cost <= m;
// }

// int solve(){
// 	int l=0,r=1e14;
// 	int ans = inf;
// 	while(l<=r){
// 		int m = (l+r)/2;
// 		if(check(m)){
// 			ans = min(ans,m);
// 			r = m-1;
// 		}else{
// 			l = m+1;
// 		}
// 	}
// 	return ans;
// }

int dp(int i, int j){
	if(i>n) return 0;
	if(j>k) return inf;
	int&ans = cache[i][j];
	if(ans!=-1) return ans;
	ans = min(dp(i,j+1),max(abs(point[i]-key[j]) + abs(key[j]-p), dp(i+1,j+1)));
	return ans;
}

int32_t main(){
	NINJA;

	cin >> n >> k >> p;
	for1(i,n) cin >> point[i];
	for1(i,k) cin >> key[i];
	sort(point+1,point+1+n);
	sort(key+1,key+1+k);
	memset(cache,-1,sizeof(cache));

	cout << dp(1,1) << endl;
	
	
	return 0;
}