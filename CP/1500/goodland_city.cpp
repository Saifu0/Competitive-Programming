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

int32_t main(){
	NINJA;

	int n,k; cin >> n >> k;
	fo(i,n) cin >> a[i];
	
	int cnt = 0;
	int i = 0;
	while(i<n){
		bool f = 0;
		for(int j=i+k-1;j>=(i-k+1)&&j>=0;j--){
			if(j<n){
				if(a[j]==1){
					f = 1;
					i = j+k;
					cout << i << endl;
					cnt++;
					break;
				}
			}
		}
		if(!f){
			cout << -1 << endl;
			return 0;
		}
	}

	cout << cnt << endl;
	
	return 0;
}