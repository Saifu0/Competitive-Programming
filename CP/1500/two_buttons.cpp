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

int n,m;
int cnt;
const int mxn = 1e4+10;
int d[mxn];

void solve(){
	queue<ii> q;
	q.push({n,0});
	memset(d,-1,sizeof(d));

	while(!q.empty()){
		int a = q.front().F;
		int c = q.front().S;
		q.pop();

		if(a==m){
			cnt = c;
			return;
		}
		d[a] = c;
		if(a>1 && d[a-1]==-1) q.push({a-1,c+1});
		if(a<m && d[2*a]==-1) q.push({2*a,c+1});
		
	}
}

int32_t main(){
	NINJA;
	cin >> n >> m;

	solve();

	cout << cnt << endl;
	
	return 0;
}