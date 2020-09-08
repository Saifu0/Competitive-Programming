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
#define mod (int)1e18+50000
#define inf (int)1e18

const int mxn = 1e5+10;
int a[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;

	fo(i,n) cin >> a[i];
	int mul = 1ll;
	int zero = 0;

	fo(i,n){
		int x =a[i];
		if(x==0) zero++;
		if(zero>0){
			cout << 0 << endl;
			return 0;
		}
	}
	fo(i,n){
		if(a[i]<=(1000000000000000000/mul))
			mul = mul*a[i];
		else{
			cout << -1 << endl;
			return 0;
		}
		
	}
	
	cout << mul << endl;
	// cout << mul << endl;
	
	return 0;
}