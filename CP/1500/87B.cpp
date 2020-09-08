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

string s;

bool isValid(int k){
	int a[4] = {0};
	fo(i,k-1){
		int idx = s[i] - '0';
		a[idx]++;
	}

	for(int i=k-1;i<sz(s);i++){
		int idx = s[i]-'0';
		a[idx]++;

		if(a[1] > 0 && a[2] > 0 && a[3] > 0) return true;

		idx = s[i - k + 1] - '0';
		a[idx]--;
	}
	return false;
}

int32_t main(){
	NINJA;

	int t; cin >>  t;
	while(t--){
		cin >> s;

		int l = 3, r = s.size();

		int res = inf;

		while(l<=r){
			int m = (l+r)/2;

			if(isValid(m)) res = min(res,m), r = m-1;
			else l = m+1;
		}

		if(res == inf) cout << 0 << endl;
		else cout << res << endl;
	}
	
	return 0;
}