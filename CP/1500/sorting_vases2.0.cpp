#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 25;
int n,m;
int a[mxn];
ii mm[mxn];
int dp[mxn];
int ans = inf;


int min_swaps(int b[]){
	vector<pair<int, int>> vec(n);
   for (int i = 0; i < n; ++i) {
      vec[i].first = b[i+1];
      vec[i].second = i;
   }
   sort(vec.begin(), vec.end());
   int cnt = 0;
   for (int i = 0; i < n; ++i) {
      if (vec[i].second == i) {
         continue;
      }
      swap(vec[i].first,vec[vec[i].second].first);
      swap(vec[i].second,vec[vec[i].second].second);
      if (i != vec[i].second) {
         --i;
      }
         ++cnt;
   }
   return cnt;
}

void solve(int l,int r,int b[]){

//	ans = min(ans,min_swaps(b));
	
	for(int i=l;i<=r;i++){

		int ff =mm[i].F, ss=mm[i].S;
		swap(b[ff],b[ss]);

		ans = min(ans,min_swaps(b));

		solve(l+1,r,b);

		swap(b[ff],b[ss]);
		ans = min(ans,min_swaps(b));

	}

}


int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		int b[mxn];
		fo(i,n) cin >> a[i+1], b[i+1] = a[i+1];

		fo(i,m){
			cin >> mm[i+1].F >> mm[i+1].S;
		}

		//fo(i,mxn) dp[i] = -1;
		solve(1,m,b);
		if(m>0)
			cout << ans << endl;
		else
			cout << min_swaps(b) << endl;

	}
	
	return 0;
}  