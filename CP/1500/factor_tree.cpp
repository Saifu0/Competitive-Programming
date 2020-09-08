#include<bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(ll i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

const int mxn = 5e6;
vi g[mxn];
vi s;
vector<bool> vis(mxn,false);


void dfs(int l, int r){
	s.pb(l);
	if(l==r){
		return;
	}
	vis[l] = true;
	int flag = 0;
	if(!g[l].empty()){
		fo(i,sz(g[l])){
			if(!vis[g[l][i]]){
				dfs(g[l][i],r);
				flag = 1;
			}
		}
	}
	if(flag==0) s.pop_back();
}

void factors(mp &m, ll x){
	for(ll i=2;i<=sqrt(x);i++){
		if(x%i==0){
			while(x%i==0){
				m[i]+=1;
				x /= i;
			}
		}
	}
	if(x>1) m[x]++;
}

int main(){
	c_p_c();
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;

		fo(i,n-1){
			ll f,s; cin >> f >> s;
			g[f].pb(s);
			g[s].pb(f);
		}
		vi cost(n+1);
		Fo(i,1,n+1) cin >> cost[i];

		ll q; cin >> q;

		while(q--){
			ll l,r; cin >> l >> r;
			dfs(l,r);
			mp m;
			//ll ans =1;
			for(auto i: s ){
				factors(m,cost[i]);
			}

			ll ans =1;
			for(auto it=m.begin();it!=m.end();it++){
				ans = (1LL*ans*(it->S+1))%mod;;
			}
			cout << ans << endl;
			s.clear();
			vis.clear();
		}
		for(auto i: g) i.clear();
	}

	return 0;
}