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

	char a[] = {'A','E','I','O','U','a','e','i','o','u'};

	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = sz(s);

		sort(s.begin(), s.end());

		int cnt = 0;

		// int idx = upper_bound(s.begin(), s.end(),'a') -s.begin();
		// cout << idx << endl;

		fo(i,10){
			int l = lower_bound(s.begin(), s.end(),a[i]) - s.begin();
			int r = upper_bound(s.begin(), s.end(),a[i]) - s.begin() - 1;

			if(l==r) cnt++;
			else cnt += r-l+1;

			// if()

		}
		cout << cnt << endl;
		
	}
	return 0;
}