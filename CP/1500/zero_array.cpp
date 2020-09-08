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

int32_t main(){
	NINJA;

	int n; cin >> n;
	int mxn = INT_MIN;

	int tot = 0;
	fo(i,n){
		int x; cin >> x;
		tot += x;
		if(mxn < x) mxn = x;
	}

	if(tot%2==0 && (tot-mxn)>=mxn)
	cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}