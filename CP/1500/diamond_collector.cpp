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
int n,k;
int L[mxn],R[mxn];
int LmxN[mxn],RmxN[mxn];

void go_L(){
	fo(i,n){
		int j = i;
		while(j<n && a[j]-a[i] <= k) j++;
		L[i] = j;
	}
}

void go_R(){
	dloop(i,n){
		int j=i;
		while(j>=0 && a[i]-a[j] <= k) j--;
		R[i] = j;
	}
}

int32_t main(){
	NINJA;
  // 	freopen("diamond.in", "rt", stdin);
 	// freopen("diamond.out", "wt", stdout);	
	cin >> n >> k;
	fo(i,n) cin >> a[i];
	sort(a,a+n-1);
	go_L();
	go_R();

	fo(i,n){
		LmxN[i] = i - L[i] + 1;
		if(i>0) LmxN[i] = max(LmxN[i],LmxN[i-1]);
	}

	dloop(i,n){
		RmxN[i] = R[i] - i + 1;
		if(i<n-1) RmxN[i] = max(RmxN[i],RmxN[i+1]);
	}
	int ans = 0;
	fo(i,n-1) ans = max(ans,LmxN[i],RmxN[i+1]);
	cout << ans << endl; 


	return 0;
}