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

struct data {
	int r,c,val;
};

const int mxn = 1234;
int mat[mxn][mxn];
data d[223];
int dp[123][3];
vector<vector<data>> st;


// int solve(int i,int flip,int n){
// 	if(i>n) return 0;

// 	if(dp[i][flip]!=-1) return dp[i][flip];
// 	int ans =0;
// 	ans = max(0LL,(d[i].val*mat[d[i].r][d[i].c]+d[i].val*d[i-1].val)+solve(i+1,flip,n));
// 	ans = max(ans,((-d[i].val*mat[d[i].r][d[i].c])+(-d[i].val*d[i-1].val))+solve(i+1,flip+1,n));

// 	return dp[i][flip] = ans;
// }

// void solve2(int n){

// 	for(int i=1;i<=n;i++){
// 		dp[i][0] = max({dp[i-1][0],dp[i-1][1]});
// 		dp[i][0] += (d[i].val*mat[d[i].r][d[i].c]+d[i].val*d[i-1].val);
// 		dp[i][1] = max(dp[i-1][0],dp[i-1][1]);
// 		dp[i][1] += ((-d[i].val*mat[d[i].r][d[i].c])+(-d[i].val*d[i-1].val));
// 	}

// 	int res = max(dp[n][0],dp[n][1]) ;
// 	cout << res << endl;

// 	vi a;

// 	for(int i=1;i<=n;i++){
// 		if(dp[i][1] > dp[i][0]) a.pb(-1);
// 		else a.pb(1);
// 	}

// 	for(auto i : a) cout << i << " " ;
// 	cout << endl;

// }

int check(vector<data> &b, int n){
	int ans = 0;
	fo(i,n){
		ans += (b[i].val*mat[b[i].r][b[i].c]);
		if(i) ans += b[i].val*b[i-1].val;
	}
	return ans;
}

void solve(int i,int n, vector<data> s){
	if(i>n+1) return;
	if(i==n+1){
		st.pb(s);
		s.clear();
		return;
	}
	//s.pb(d[i]);
	solve(i+1,n,s);
	d[i].val = -d[i].val;
	s.pb(d[i]);
	d[i].val = -d[i].val;
	solve(i+1,n,s);
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int R,C,n;
		cin >> R >> C >> n;
		fo(i,R) fo(j,C) cin >> mat[i+1][j+1];

		fo(i,n){
			cin >> d[i+1].r >> d[i+1].c >> d[i+1].val;
		}
		vector<pair<int,data>> aa;
		fo(i,n){
			aa.pb({d[i+1].val,d[i+1]});
		}

		vector<data> s;
		solve(1,n,s);

		
		for(auto &it : st){
			//it.resize(n);
			fo(i,n){
				bool ok = false;
				for(auto j : it){
					if(abs(j.val) == (aa[i].F)) ok = true;
				}
				if(!ok) {
					it.insert(it.begin()+i,aa[i].S);
				//	cout << "tst" << endl;
				}
			}
		}

		// for(auto it : st){
		// 	for(auto i: it){
		// 		cout << i.val << " ";
		// 	}
		// 	cout << endl;
		// }

		int mx = -inf;
		vector<data> aaaa;

		for(auto it: st){
			int xx = check(it,n);
			if(xx > mx){
				mx = xx;
				aaaa = it;
			}
		}

		cout << mx << endl;
		for(auto i : aaaa){
			if(i.val<0) cout << -1 << " ";
			else cout << 1 << " ";
		}
		cout << endl;
		fo(i,sz(st)) st[i].clear();
	}
	
	return 0;
}