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

const int mxn = 200005;
int n,k;
int a[mxn];
bool vis[mxn];

void solve(int t){
	cin >> n >> k;
	fo(i,n) cin >> a[i+1], vis[i+1] = false;

	vector<iii> triple;
	vii dou;

	Fo(i,1,n+1){
		if(!vis[i]){
			vi cyc;
			int j = i;
			while(!vis[j]){
				cyc.pb(j);
				vis[j] = true;
				j = a[j];
			}

			while(sz(cyc)>2){
				int x = cyc.back();
				cyc.pop_back();
				int y = cyc.back();
				cyc.pop_back();
				int z = cyc.back();
				if(sz(cyc)==1)
					cyc.pop_back();
				triple.pb(tie(z,y,x));
				k -=1;
			}
			if(sz(cyc)==2){
				dou.pb({cyc[0],cyc[1]});
			}
		}
	}

	while(sz(dou)>1){
		ii x = dou.back();
		dou.pop_back();
		ii y = dou.back();
		dou.pop_back();

		triple.pb(tie(x.S,y.F,y.S));
		triple.pb(tie(x.F,x.S,y.F));
		k -= 2;
	}

	if(!dou.empty()){
		cout << -1 << endl; return;
	}

	if(k<0){
		cout << -1 << endl;
		return;
	}

	cout << sz(triple) << endl;
	for(auto i : triple){
		cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << endl;
	}
	return;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		solve(t);
	}
	
	return 0;
}