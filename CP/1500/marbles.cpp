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

ll C(int n, int k){
	if(k>n-k) k = n-k;

	ll ans = 1;
	fo(i,k){
		ans *= (n-i);
		ans /= (i+1);
	}

	return ans;
}

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;

		if(k>n){
			cout << 0 << endl;
			continue;
		}
		cout << C(n-1,k-1) << endl;
	}

	return 0;
}