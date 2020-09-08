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

const int mxn=2010;
int a[mxn],b[mxn];

int32_t main(){
	NINJA;
	int n,k; cin >> n >> k;
	fo(i,n) cin >> a[i];
	fo(i,k) cin >> b[i];
	int sum = 0;
	set<int> ans;
	fo(i,n){
		sum += a[i];
		int pos = b[0]-sum;
		int val = pos;
		set<int> s;
		fo(j,n){
			val += a[j];
			s.insert(val);
		}
		bool ok = 1;
		fo(j,k){
			if(s.count(b[j])==0){
				ok = 0;
				break;
			}
		}
		if(ok) ans.insert(pos);
	}
	cout << sz(ans) << endl;
	
	return 0;
}