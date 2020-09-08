// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
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
int n; 

int32_t main(){
	NINJA;

	cin >> n;
	fo(i,n) cin >> a[i];

	if(n<=1){
		cout << 0 << endl;
		return  0;
	}

	int ans = n+1;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			int cnt = 0;
			if(i) cnt++;
			if(j) cnt++;
			int one = a[0] + i;
			int dif = (a[1] + j) - (a[0] + i);
			bool ok = 1;
			for(int k=2;k<n;k++){
				int nxt = one + k*dif;
				if(abs(nxt-a[k]) > 1){
					ok = 0;
					break;
				}
				if(nxt != a[k]) cnt++;
			} 
			if(!ok) continue;
			ans = min(cnt,ans);
		}
	}

	if(ans > n) ans = -1;
	cout << ans << endl;
	
	return 0;
}