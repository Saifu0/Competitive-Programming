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

	int n,m; cin >> n >> m;

	int a[n+10];

	fo(i,n) cin >> a[i];

	if(n>m){
		cout << 0 << endl;
		return 0;
	}

	int res = 1;
	fo(i,n){
		Fo(j,i+1,n){
			res = (res*abs(a[i]-a[j])+m)%m;
		}
	}

	cout << res << endl;
	
	return 0;
}