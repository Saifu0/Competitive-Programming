#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 1e6+500;
const int blk = 1010;
int a[mxn],f[mxn];
int n,q;


//SQRT decomposition
int solve(int l, int r){
	int lb = l/blk;
	int rb = r/blk;
	int mn = INT_MAX;

	if(lb==rb)
		fo(i,n) mn = min(mn,a[i]);
	else{
		for(int i=l;i<blk*(lb+1);i++) mn = min(mn,a[i]);
		for(int i=lb+1;i<rb;i++) mn = min(mn,f[i]);
		for(int i=blk*rb;i<=r;i++) mn = min(mn,a[i]);
	}

	return mn;
}

int main(){
	NINJA;
	cin >> n;

	fo(i,n) cin >> a[i];

	for(int i=0;i<n;i+=blk){
		int mnn = INT_MAX;

		for(int j=0;j<blk;j++){
			mnn = min(mnn,a[j]);
			f[i/blk] = mnn;
		}
	}

	cin >> q;

	while(q--){
		int l,r; cin >> l >> r;
		--l,--r;
		cout << solve(l,r) << endl;
	}



	return 0;
}