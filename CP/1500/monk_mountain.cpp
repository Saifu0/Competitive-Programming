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

const int mxn = 1e5+10;
int a[mxn];
int l[mxn];
int r[mxn];

int32_t main(){
	NINJA;

	int n,q; cin >> n >> q;
	Fo(i,1,n+1){
		cin >> l[i] >> r[i];
		a[i] = a[i=1] + (r[i]-l[i]+1);
	}

	while(q--){
		int x; cin >> x;
		x--;
		int idx = lower_bound(a+1,a+n+1,x) - a;
		cout << (l[idx]+x - a[idx-1]) << endl;
	}
	
	return 0;
}