#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
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

const int mxn = 1e6+500;
ll n,m,c;


void add(ll idx, ll val, vector<ll> &tree){
	n = tree.size();
	for(idx;idx<n;idx += (idx	& -idx)) tree[idx] += val;
}

void update(ll l, ll r, ll val, vector<ll> &tree){
	add(l,val,tree);
	add(r+1,-val,tree);
}


ll query(ll idx,vector<ll> &tree){
	ll ans = 0;
	for(idx;idx>0;idx-=(idx & -idx)) ans += tree[idx];
	return ans;
}

int main(){
	NINJA;
	cin >> n >> m >> c;

	vector<ll> tree(n+2,0);
	update(1,n+1,c,tree);

	while(m--){
		char ch;
		cin >> ch;
		if(ch=='S'){
			ll l,r,val; cin >> l >> r >> val;
			update(l,r,val,tree);
		}else{
			ll ind; cin >> ind;
			cout << query(ind,tree) << endl;
		}
	}


	return 0;
}