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
		int n,p,k; cin >> n >> p >> k;
		vi a(n);

		fo(i,n) cin >> a[i];

		sort(a.begin(), a.end());
		
		int pref = 0;
		int ans = 0;

		fo(i,k+1){
			int sum = pref;
			if(sum> p) break;
			int cnt = i;
			for(int j=i+k-1;j<n;j+=k){
				if(sum + a[j] <= p){
					cnt += k;
					sum += a[j];
				}else{
					break;
				}
			}
			pref += a[i];
			ans = max(ans,cnt);
		}

		// if(ans==0) cout << 0 << endl;
		cout << ans << endl;
		
	}
	
	return 0;
}