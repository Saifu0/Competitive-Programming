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

const int mxn = 1e3+10;
string a[mxn];
int n,m;

int32_t main(){
	NINJA;

	cin >> n >> m;
	fo(i,n) cin >> a[i];

	vi s,g;

	fo(i,n){
		fo(j,m){
			if(a[i][j]=='G') g.pb(j);
			if(a[i][j]=='S') s.pb(j);
		}
	}

	bool ok = 1;
	fo(i,n){
		if(s[i] < g[i]){
			ok = 0;
			break;
		}
	}

	if(!ok){
		cout << -1 << endl;
		return 0;
	}

	int cnt = 0;
	
	set<int> st;
	fo(i,n){
		st.insert(s[i]-g[i]);
	}

	cout << sz(st) << endl;
	
	return 0;
}

/*
10 10

G********S

*G*******S

**G******S

***G*****S

****G****S

*****G***S

******G**S

*******G*S

********GS

G********S
*/