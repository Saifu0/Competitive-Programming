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
int mn[mxn];

int32_t main(){
	NINJA;
  	freopen("homework.in", "rt", stdin);
 	freopen("homework.out", "wt", stdout);	
	int n; cin >> n;
	for1(i,n) cin >> a[i], mn[i] = inf;
	mn[n] = a[n];
	
	for(int i=n-1;i>=1;i--) a[i] += a[i+1], mn[i] = min(mn[i+1],a[i]);
	// for1(i,n) cout <<mn[i] << " ";
	int best_num=0;
	int best_id=1;
	for1(i,n-2){
		if((a[i+1]-mn[i+1])*best_id > best_num*(n-i-1)){
			best_num = a[i+1]-mn[i+1];
			best_id = n-i-1;
		}
	}
	for1(i,n-2){
		if((a[i+1]-mn[i+1])*best_id == best_num*(n-i-1)){
			cout << i << endl;
		}
	}


	return 0;
}