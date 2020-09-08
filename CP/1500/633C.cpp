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
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];

		//fo(i,n) cin >> a[i];

		int mn = INT_MIN;
		int val = 0;
		fo(i,n){
			int x; cin >> x;
			mn = max(mn,x);
			val = max(val,mn-x);
		}

		ll res=0;
		while((1LL<<res)-1 < val){
			res++;
		}
		cout << res << endl;
	}

	return 0;
}