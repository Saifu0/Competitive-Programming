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

const int mxn = 2e5+10;
int a[2*mxn];
int pref1[2*mxn],pref2[2*mxn];
int n,k;

int32_t main(){
	NINJA;
	cin >> n >> k;

	fo(i,n){
		cin >> a[i+1];
		a[i+1+n] = a[i+1];
	}

	Fo(i,1,2*n+1){
		pref1[i] = pref1[i-1] + (a[i]*(a[i]+1))/2;
		pref2[i] = pref2[i-1] + a[i];
	}

	int mx = -inf;
	for(int i=2*n;i>=n;i--){
		int l = 1, r = i, ans = i;
		while(l<=r){
			int m = (l+r)/2;
			if(pref2[i]-pref2[m] < k){
				ans = m;
				r = m-1;
			}else l = m+1;
		}
		//cout << ans << " ";
		int subtract = pref2[i] - pref2[ans-1] - k;
		int val = pref1[i] - pref1[ans-1];
		val -= (subtract*(subtract+1))/2;
		//cout << val << endl;
		mx = max(mx,val);
	}

	cout << mx << endl;
	
	return 0;
}