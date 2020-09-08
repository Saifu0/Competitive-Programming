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

const int mxn = 1001;
bool cuts[mxn];
int cache[mxn][mxn];

int solve(int se, int ed){
		
	int &ans = cache[se][ed];

	if(ans!=-1) return ans;

	ans = inf;
	for(int i=se;i<=ed;i++){
		if(cuts[i]){
			int cost = (ed-se) +solve(se,i) + solve(i,ed);
			ans = min(cost,ans);
		}
	}
	if(ans==inf) ans = 0;
	return ans;
}

void init(){
	memset(cache,-1,sizeof(cache));
	memset(cuts,false,sizeof(cuts));
}

int32_t main(){
	NINJA;
	int x;
	
	while(true){
		int len; cin >> len;
		if(len==0) break;
		init();
		int n; cin >> n;
		// vi a(n);
		fo(i,n) cin >> x, cuts[x]=1;
		int best = solve(0,len);
		cout << "The minimum cutting is ";
		cout << best << "." << endl;
	}
	
	return 0;
}