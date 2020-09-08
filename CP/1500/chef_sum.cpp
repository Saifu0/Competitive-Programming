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

const int mxn = 1e5+500;
int pref[mxn],suf[mxn],a[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		fo(i,n){
			cin >> a[i];
			pref[i+1] = pref[i] + a[i];
		}

		for(int i=n-1;i>=0;i--){
			suf[n-i] = suf[n-i-1] + a[i];
		}

		reverse(suf+1,suf+n+1);

		//Fo(i,1,n+1) cout << pref[i] << " " << suf[i] << endl;

		Fo(i,1,n+1) pref[i] += suf[i];

		int indx = min_element(pref+1,pref+n+1)-pref;
		cout << indx << endl;
	}
	
	return 0;
}