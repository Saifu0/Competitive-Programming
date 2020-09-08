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

const int mxn = 2e5+10;
int g[mxn],f[mxn];

int32_t main(){
	NINJA;
  	freopen("rental.in", "rt", stdin);
 	freopen("rental.out", "wt", stdout);	
	int n,m,r; cin >> n >> m >> r;
	vi a(n);
	fo(i,n) cin >> a[i];
	priority_queue<pair<int,int>> q;
	fo(i,m){
		int x,y; cin >> x >> y;
		q.push({y,x});
	}
	vi b(r,0);
	fo(i,r) cin >> b[i];
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
	for1(i,n) g[i] = g[i-1] + (i > r ? 0 : b[i-1]);
	// reverse(g+1,g+n+1);
	fo(i,n){
		
		int pos = 0;
		while(!q.empty()){
			ii t = q.top();
			// cout << t.F << " " << t.S << endl;
			q.pop();
			pos += min(a[i],t.S)*t.F;
			if(a[i]<=t.S){
				t.S -= a[i];
				if(t.S!=0) q.push(t);
				break;
			}
			a[i] -= t.S;
		}
		// cout << pos << " ";
		f[i+1] = pos;
	}
	for1(i,n) f[i]+= f[i-1];
	// for1(i,n) cout << g[i] << " " << f[i] << endl;
	int mx = 0;
	for1(i,n) mx = max(mx,g[i]+f[n-i]);
	cout << mx << endl;
	
	return 0;
}