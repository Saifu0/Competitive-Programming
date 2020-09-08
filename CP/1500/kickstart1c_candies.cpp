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

const int mxn  = 1e5+ 50;
int a[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	int start = 1;
	while(t--){
		int n,q; cin >> n >> q;
		fo(i,n) cin >> a[i+1];

		int ans = 0;
		while(q--){
			char ch;
			int l ,  r;
			cin >> ch >> l >> r;
			if(ch=='Q'){
				int res = 0;
				int x = 1;
				for(int i=l;i<=r;i++){
					if(x%2) res += x*a[i];
					else res += -1*x*a[i];
					x++;
				}
				//cout << res << " ";
				ans += res;
			}else{
				a[l] = r;
			}
		}

		cout << "Case #" << start++ << ": " << ans << endl;
	}
	
	return 0;
}