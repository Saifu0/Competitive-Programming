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

const int mxn = 110;
int ar[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;
	vi a,b,c;

	fo(i,n) cin >> ar[i];
	sort(ar,ar+n,greater<int>());
	bool f = 0;
	int cnt = 0;
	fo(i,n){
		int x = ar[i];
		if(sz(a)==0 && x < 0) a.pb(x);
		else if((!f && x > 0) || (!f && cnt <= 1 && x < 0)){
			if(x > 0){
				f = 1;
				b.pb(x);
			}else{
				cnt++;
				b.pb(x);
			}
		}else{
			c.pb(x);
		}
	}

	cout << 1 << " " << a[0] << endl;
	cout << sz(b) << " ";
	for(auto i : b) cout << i << " ";
	cout << endl;
	cout << sz(c) << " ";
	for(auto i : c) cout << i << " ";
	cout << endl;
	
	return 0;
}