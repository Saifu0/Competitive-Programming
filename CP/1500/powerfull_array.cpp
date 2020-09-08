#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

const int blk = 555;

struct query {
	ll l,r,ind;
};

query ar[200005];
ll a[200005], ans[200005];
ll freq[1000005];
ll power = 0;

bool cmp(query x, query y){
	if(x.l/blk != y.l/blk) return x.l/blk < y.l/blk;
	else return x.r < y.r;
}

void add(ll pos){
	ll el = a[pos];
	ll pref = freq[el];
	ll cur = ++freq[el];

	power -= (pref*pref*el);
	power += (cur*cur*el);
}

void remove(ll pos){
	ll el = a[pos];
	ll pref = freq[el];
	ll cur = --freq[el];

	power -= (pref*pref*el);
	power += (cur*cur*el);

}

int main(){
	NINJA;

	ll n,m; cin >> n >> m;
	fo(i,n) cin >> a[i];

	fo(i,m){
		cin >> ar[i].l >> ar[i].r;
		ar[i].ind = i;
		--ar[i].l, -- ar[i].r;
	}

	sort(ar,ar+m,cmp);

	ll ml = 0, mr = -1;
	fo(i,m){
		ll l = ar[i].l;
		ll r= ar[i].r;

		while(ml>l)
			--ml, add(ml);
		while(mr<r)
			++mr, add(mr);

		while(ml<l)
			remove(ml), ++ml;
		while(mr>r)
			remove(mr), --mr;

		ans[ar[i].ind] = power;
	}

	fo(i,m) cout << ans[i] << endl;

	return 0;
}