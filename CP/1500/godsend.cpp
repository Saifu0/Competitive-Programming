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

const int mxn = 1e6+10;
int a[mxn];
int pref[mxn];
int suf[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;
	fo(i,n) cin >> a[i];

	pref[0] = a[0];
	for1(i,n-1) pref[i] = pref[i-1]  +a[i];
	suf[0] = a[n-1];
	for(int i=n-2;i>=0;i--) suf[n-i-1] = suf[n-i-2] + a[i];

	// fo(i,n) cout << pref[i] << " " << suf[i] << endl;

	bool ok = 0;
	int idx=-1,idx2= -1;
	fo(i,n) if(pref[i]%2==1) {ok = 1; idx = i;}
	fo(i,n) if(suf[i]%2==1) {ok = 1; idx2 = i;}

	// cout << idx << " " << idx2 << endl;

	if(!ok) cout << "Second" << endl;
	else{
		if(idx > idx2){
			if((pref[n-1] - pref[idx])%2==1 || pref[n-1]-pref[idx] == 0) cout << "First" << endl;
			else cout << "Second" << endl;
		}else{
			if((suf[n-1]-suf[idx2])%2==1 || suf[n-1]-suf[idx2]==0) cout << "First" << endl;
			else cout << "Second" << endl;
		}
	}
	
	return 0;
}