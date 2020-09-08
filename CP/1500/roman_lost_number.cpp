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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn =1e5+10;
int a[mxn];
int n,s;

int32_t main(){
	NINJA;

	cin >> n >> s;
	fo(i,n){
		cin >> a[i];
	}
		
	fo(i,n-1){
		if(a[i]==1) s -= 1;
	}

	if(s<0) cout << "NO" << endl;
	else if(a[n-1]==0 && (s==0 || s%2==0)) cout << "YES" << endl;
	else if(a[n-1]==1 && s%2==1) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}