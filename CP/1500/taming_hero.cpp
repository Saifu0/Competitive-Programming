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

const int mxn = 1e5;
int a[mxn];
int b[110];

int32_t main(){
	NINJA;
	freopen("taming.in", "rt", stdin);
	freopen("taming.out", "wt", stdout);
	int n; cin >> n;
	bool ok = 1;
	fo(i,n) cin >> a[i];

	if(a[0]>0){
		cout << -1 << endl;
		return 0;
	}
	a[0] = 0;

	
	int t=-1,mn = 0, mx = 0;
	dloop(i,n){
		if(t!=-1 && a[i]!=-1 &&a[i]!=t){
			cout << -1 << endl;
			return 0;
		}
		if(t==-1) t= a[i];
		if(a[i]==-1) a[i] = t;
		if(a[i]==0) mn++;
		if(a[i]==-1) mx++;
		if(t>-1) t--;
	}
	cout <<mn << " " << mn+mx << endl;
	
	return 0;
}