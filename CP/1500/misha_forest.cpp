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


int main(){
	NINJA;
	int n; cin >> n;
	int d[n],s[n];

	fo(i,n) cin >> d[i] >> s[i];

	vi t;
	int szz =0;
	fo(i,n){ if(d[i]==1){ t.pb(i); szz++;} }
	vector<ii> ans;

	fo(i,szz){
		int u = t[i];
		if(d[u]==0) continue;
		ans.pb({u,s[u]});
		d[s[u]]--;
		s[s[u]] ^= u;

		if(d[s[u]]==1){
			t.pb(s[u]);
			szz++;
		}
	}

	cout << ans.size() << endl;
	for(auto it: ans){
		cout << it.F << " " << it.S << endl;
	}

	return 0;
}