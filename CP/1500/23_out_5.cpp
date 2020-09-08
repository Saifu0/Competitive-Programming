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

int a[5];
bool found = 0;
bool vis[5];

void solve(int i, int val, int first){
	if(found) return;
	if(i==5){
		found |= (val==23);
		return;
	}

	fo(j,5){
		if(vis[j]) continue;
		vis[j] = 1;
		if(first){
			solve(i+1,val-a[j],1);
			solve(i+1,val+a[j],1);
			solve(i+1,val*a[j],1);
		}else{
			solve(i+1,a[j],1);
		}
		vis[j] = 0;
	}
}

int32_t main(){
	NINJA;

	while(true){
		found=0;
		fo(i,5) cin >> a[i], vis[i] = 0;
		if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0) break;
		solve(0,0,0);
		if(found) cout << "Possible" << endl;
		else cout << "Impossible" << endl;
	}
	
	return 0;
}