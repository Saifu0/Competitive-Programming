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

const int mxn = 8123;
int a[mxn];
int pref[mxn];
int freq[mxn];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		memset(freq,0,sizeof freq);

		Fo(i,1,n+1){
			cin >> a[i];
		}

		Fo(i,1,n+1) ++freq[a[i]];

		for(int i=1;i<=n;i++) pref[i] = pref[i-1]  +a[i];

		int cnt = 0;

		for(int i=2;i<=n;i++){
			for(int j=1;j<i;j++){
				int szz = pref[i] - pref[j-1];
				if(szz<=n) cnt += freq[szz] , freq[szz] = 0;
			}
			//cout << endl;
		}

		cout << cnt << endl;

	}
	
	return 0;
} 