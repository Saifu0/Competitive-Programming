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

int32_t main(){
	NINJA;

	int a[4];
	fo(i,4) cin >> a[i];

	sort(a,a+4);
	bool f = false;

	fo(i,2){
		if((a[i]+a[i+1]) > a[i+2] && (a[i]+a[i+2])>a[i+1] && (a[i+1]+a[i+2]) > a[i]) f = true;
	}

	if(f){
		cout << "TRIANGLE" << endl;
		return 0;
	}

	
	fo(i,2){
		if(a[i]+a[i+1] <= a[i+2]) f = true;
	}

	if(f){
		cout << "SEGMENT" <<  endl;
		return 0;
	}

	cout << "IMPOSSIBLE" << endl;
	
	return 0;
}