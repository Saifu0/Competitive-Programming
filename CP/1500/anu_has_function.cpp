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

const int mxn = 1e5+50;
int a[mxn];
int n;
int pref[mxn],suf[mxn];

int32_t main(){
	NINJA;
	cin >> n;
	fo(i,n){
		cin >> a[i+1];
		pref[i+1] = pref[i] | a[i+1];
	}

	for(int i=n;i>=1;i--){
		suf[i] = suf[i+1]|a[i];
	}

	int res = -1, idx = 0;

	// for(int i=1;i<=n;i++){
	// 	cout << pref[i] << " " << suf[i] << endl;
	// }

	Fo(i,1,n+1){
		int x = a[i] , y = pref[i-1]|suf[i+1];
		if((x|y)-y > res){
			res = (x|y)-y;
			idx = i;
		}
	}

	cout << a[idx] << " ";
	Fo(i,1,n+1){
		if(i!=idx) cout << a[i] << " ";
	}



	return 0;
}