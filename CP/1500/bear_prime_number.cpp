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

const int mxn = 1e7+10;
int cnt[mxn];
int pref[mxn];
int n,m;
bool prime[mxn];


int32_t main(){
	NINJA;

	cin >> n;
	fo(i,n){
		int x; cin >> x;
		cnt[x]++;
	}

	for(int i=2;i<mxn;i++){
		if(!prime[i]){
			pref[i] = cnt[i];
			for(int j=2;j*i<mxn;j++){
				prime[i*j] = 1;
				pref[i] += cnt[i*j];
			}
		}
	}

	fo(i,mxn-1) pref[i+1] += pref[i];

	cin >> m;
	while(m--){
		int l,r; cin >> l >> r;
		if(l > (int)10000000){
			cout << 0 << endl;
			continue;
		}
		r = min(r,(int) 10000000);
        l = min(l,(int) 10000000);
		cout << pref[r] - pref[l-1] << endl;
	}

	
	return 0;
}