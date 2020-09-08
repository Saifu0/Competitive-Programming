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

const int mxn = 1e5+10;

int32_t main(){
	NINJA;
	
	int n; cin >> n;
	vi a(n);

	fo(i,n) cin >> a[i];

	sort(a.begin(), a.end());

	int q; cin >> q;
	while(q--){
		int t,val; cin >> t >> val;
		if(t==0){
			int idx = lower_bound(a.begin(), a.end(),val) -a.begin();
			cout << n-idx << endl;
		}else{
			int idx = upper_bound(a.begin(), a.end(),val) - a.begin();
			cout << n - idx << endl;
		}
	}

	return 0;
}