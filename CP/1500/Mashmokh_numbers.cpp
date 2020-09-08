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

	int n,k; cin >> n >> k;

	if(n==1){
		if(k==0) cout << 0 << endl;
		else cout << -1 << endl;
		return 0;
	}else{
		int m = n/2;
		if(k<m){
			cout << -1 << endl;
			return 0;
		}

		cout << k-m+1 << " " << 2*(k-m+1) << " ";
		int t = 2*(k-m+1)+1;
		fo(i,m-1){
			cout << (++t) << " ";
			cout << (++t) << " ";
		}
		if(n%2) cout << (++t) << " ";
	}
	
	return 0;
}