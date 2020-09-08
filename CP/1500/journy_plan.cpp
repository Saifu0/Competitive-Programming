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

	map<int,ll> m;

	ll ans = 0;

	Fo(i,1,n+1){
		int x; cin >> x;
		m[i-x] += x;

		ans = max(ans,m[i-x]);
	}

	// for(auto it : m){
	// 	cout << it.F << " " << it.S << endl;
 // 	}

	cout << ans << endl;

	return 0;
}