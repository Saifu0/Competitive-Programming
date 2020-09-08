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

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[10];

		fo(i,n) cin >> a[i];

		int mn = inf, mx = -inf;

		//cout << mn << " " << mx << endl;

		int i=0;
		while(i<n){
			int j=i+1;
			int cnt=1;
			int key = a[i];
			while(j<n && a[j]-key<=2){
				cnt++;
				key = a[j];
				j++;
			}
			mx = max(mx,cnt);
			mn = min(mn,cnt);
			i = j;
		}

		cout << mn << " " << mx << endl;
	}
	
	return 0;
}