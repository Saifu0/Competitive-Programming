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

const int mxn = 23;
ll a[mxn];

ll solve(int n, ll sum , ll tot){
	if(n==0){
		return abs((tot-sum)-sum);
	}

	return min(solve(n-1,sum+a[n-1],tot),solve(n-1,sum,tot));
}

int main(){
	NINJA;

	
	int n; cin >> n;

	ll tot  = 0;

	fo(i,n){
		cin >> a[i];
		tot += a[i];
	}

	cout << solve(n,0,tot) << endl;
	

	return 0;
}