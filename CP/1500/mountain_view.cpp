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

bool cmp(ii x, ii y){
	return x.S > y.S;
}

int32_t main(){
	NINJA;
  	freopen("mountains.in", "rt", stdin);
 	freopen("mountains.out", "wt", stdout);	
	int n; cin >> n;
	priority_queue<pair<int,int>> q;
	fo(i,n){
		int x,y; cin >> x >> y;
		q.push({y,x});
	}
	int cnt = 0;
	while(!q.empty()){
		ii t = q.top();
		q.pop();
		vii a;
		// cout << t.F << " " << t.S << endl;
		while(!q.empty()){
			ii tt = q.top();
			q.pop();
			if(tt.S <= t.S){
				if((t.F-(t.S-tt.S)) >= tt.F) continue;
				else a.pb(tt);
			}else{
				if((t.F-(tt.S-t.S)) >= tt.F) continue;
				else a.pb(tt);
			}
		}
		for(auto each : a) q.push(each);
		cnt++;
	}
	cout << cnt << endl;

	return 0;
}