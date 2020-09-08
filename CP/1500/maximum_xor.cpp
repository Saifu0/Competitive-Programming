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

	ll l,r; cin >> l >> r;

	ll rr = l^r;
	int m = 0;
	//cout << rr << endl;


	while(rr){
		m++;
		rr >>=1;
	}

	//cout << m << endl;

	ll ans =0;
	ll add = 1;
	while(m--){
		ans += add;
		add <<=1;
	}

	cout << ans << endl;

	return 0;
}