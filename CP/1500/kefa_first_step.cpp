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


int main(){
	NINJA;

	int n; cin >> n;
	vi a(n);

	fo(i,n) cin >> a[i];

	int i=0;
	int mxn = 0;
	int j = 1;

	vi pref(n);
	pref[0] = 1;

	Fo(i,1,n){
		pref[i] = pref[i-1];
		if(a[i]>=a[i-1]) pref[i] +=1;
		else pref[i] = 1;
	}

	fo(i,n){
		mxn = max(mxn,pref[i]);
	}

	cout << mxn << endl;

	return 0;
}