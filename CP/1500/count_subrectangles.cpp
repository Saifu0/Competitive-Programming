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

const int mxn = 4e4+500;


vector<ll> solve(vi a){
	int n = sz(a);
	vector<ll> res(n+1);
	int i=0;

	while(i<n){
		if(a[i]==0){
			i++;
			continue;
		}
		int j = i;

		while(j<n && a[j]==1){
			j++;
		}

		for(int len=1;len<=j-i;len++){
			res[len] += (j-i-len+1);
		}
		i=j;
	}
	return res;
}

int main(){
	NINJA;
	int n,m,k;
	cin >> n >> m >> k;

	vi a(n),b(m);

	fo(i,n) cin >> a[i];
	fo(i,m) cin >> b[i];

	auto aa = solve(a);
	auto bb = solve(b);

	ll ans = 0;

	for(int i=1;i<sz(aa);i++){
		if(k%i==0 && k/i<=m){
			ans += aa[i]*bb[k/i];
		}
	}

	cout << ans << endl;

	return 0;
} 