// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define all(a) a.begin(),a.end()
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

const int mxn= 110;

int32_t main(){
    NINJA;

	int n,k; cin >> n >> k;
	vi a(n);
	fo(i,n) cin >> a[i];

	vector<bool> vis(n,false);
	
	vi ans;
	int so_far = 0;
	while(1){
		int mn = inf;
		int id = -1;
		fo(i,n){
			if(!vis[i]){
				if(mn > a[i]){
					mn = a[i];
					id = i;
				}
			}
		}
		if(mn==inf) break;
		if(mn + so_far > k) break;
		so_far += mn;
		vis[id] = 1;
		ans.pb(id+1);
	}

	cout << sz(ans) << endl;
	for(int each : ans){
		cout << each << " ";
	}
	cout << endl;
    
    return 0;
}

