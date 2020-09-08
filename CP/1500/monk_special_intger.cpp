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
int n,k;
int a[mxn];

bool check(int m){
	int sum = 0;
	fo(i,m) sum += a[i];

	if(sum > k) return false;

	int j = 0;
	for(int i=m;i<n;i++){
		sum += a[i] - a[j++];
		if(sum > k) return false;
	}
	return true;
}

int32_t main(){
	NINJA;

	cin >> n >> k;

	fo(i,n) cin >> a[i];


	int l=0,r=1e9;
	int ans = 0;

	while(l<=r){
		int m = (l+r)/2;
		if(check(m)){
			ans = max(ans,m);
			l = m+1;
		}else{
			r = m-1;
		}
	}

	cout << ans << endl;
	
	return 0;
}