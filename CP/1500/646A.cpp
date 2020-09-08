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

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >> x;
		int odd = 0, even = 0;

		fo(i,n){
			int val; cin >> val;
			if(val%2==0) even++;
			else odd++;
		}

		bool f = 0;

		for(int i=1;i<=odd&&i<=x;i+=2){
			int need = x - i;
			if(even>=need) f = 1;
		}
		if(f) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	
	return 0;
}