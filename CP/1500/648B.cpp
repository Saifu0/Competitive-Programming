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
		int n; cin >> n;
		vi a(n),b(n),c(n);

		fo(i,n) cin >> a[i], c[i] = a[i];
		fo(i,n) cin >> b[i];


		bool ok = true;
		bool not_ok1 = true;
		bool not_ok2 = true;
		fo(i,n-1){
			ok = ok && (a[i]<=a[i+1]);
			not_ok1 = not_ok1 && (b[i]==0);
			not_ok2 = not_ok2 && (b[i]==1);
		}
		not_ok1 = not_ok1 && (b[n-1]==0);
		not_ok2 = not_ok2 && (b[n-1]==1);
		if(ok){
			cout << "Yes" << endl;
			continue;
		}

		if((!ok && not_ok1) || (!ok && not_ok2)){
			cout << "No" << endl;
			continue;
		}

		// sort(c.begin(), c.end());
		cout << "Yes" << endl;

	}
	
	return 0;
} 