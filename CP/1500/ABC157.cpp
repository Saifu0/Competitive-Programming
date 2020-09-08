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

ll n,m,k;
vector<ll> par,szz,ans;

ll find(ll x){
	if(par[x]==x) return x;
	else{
		ll r = find(par[x]);
		par[x] = r;
		return r; 
	}	
}

bool join(int x, int y){
	x = find(x), y = find(y);
	if(x==y) return false;
	if(x>y) swap(x,y);
	par[y] = x;
	szz[x] += szz[y];
	return true;
}

bool same(int x, int y){
	return (find(x)==find(y));
}

int main(){
	NINJA;

	cin >> n >> m >> k;
	fo(i,n){
		par.pb(i);
		szz.pb(1);
		ans.pb(0);
	}

	fo(i,m){
		ll f,s; cin >> f >> s;
		--f,--s;
		join(f,s);
		ans[f]--,ans[s]--;
	}

	fo(i,k){
		ll f,s; cin >> f >> s;
		--f,--s;
		if(same(f,s)){
			ans[f]--,ans[s]--;
		}
	}

	fo(i,n){
		ans[i] += szz[find(i)]-1;
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}