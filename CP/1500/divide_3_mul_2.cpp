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

const int mxn = 123;

int count3(int x){
	int r = 0;
	while(x%3==0){
		r++;
		x /= 3;
	}

	return r;
}

int32_t main(){
	NINJA;

	int n; cin >> n;

	vii a(n);

	fo(i,n){
		cin >> a[i].S;
		a[i].F = -count3(a[i].S);
	}

	sort(a.begin(), a.end());

	fo(i,n) cout << a[i].S << " "; 


	
	return 0;
}