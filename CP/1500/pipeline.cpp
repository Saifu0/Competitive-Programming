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

int32_t main(){
	NINJA;

	int n,k; cin >> n >> k;

	if(n==1){
		cout << 0 << endl;
		return 0;
	}
	n--;
	if((k*(k-1))/2 < n){
		cout << "-1" << endl;
		return 0;
	}

	

	int l=0,r=k-1;
	int ans =r;

	int yes = (k*(k-1))/2;

	while(l<=r){
		int m = (l+r)/2;
		int s = (m*(m+1))/2;
		if(yes-s >= n){
			ans = m;
			l = m+1;
		}else{
			r=m-1;
		}
	}

	cout << k - ans - 1 << endl;
	
	return 0;
}