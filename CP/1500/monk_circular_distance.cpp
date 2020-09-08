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
int a[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;

	fo(i,n){
		int f,s; cin >> f >> s;
		a[i] = f*f + s*s;
	}

	sort(a,a+n);

	int q; cin >> q;
	while(q--){
		int val; cin >> val;

		int l = 0, r= n-1;
		while((r-l)>1){
			int m = (l+r)/2;
			double tp = sqrt(a[m]);
			if(tp > (val*1.0)) r = m-1;
			else l = m;
		}

		double tp1 = sqrt(a[l]);
		double tp2 = sqrt(a[r]);

		if(tp1 > val*1.0) cout << 0 << endl;
		else if(tp2 <= val*1.0) cout << r+1 << endl;
		else cout << l+1 << endl;

		// cout << ans + 1 << endl;
	}
	
	return 0;
}