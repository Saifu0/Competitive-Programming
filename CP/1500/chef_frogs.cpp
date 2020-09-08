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

int32_t main(){
	NINJA;

	int n,k,p; cin >> n >> k >> p;

	mp m;
	mp mm;
	vi v;

	fo(i,n){
		int x; cin >> x;
		v.pb(x);
		m[i] = x;
	}

	sort(v.rbegin(), v.rend());
	mm[v[0]] = v[0]+k;

	Fo(i,1,n){
		if(v[i-1]-v[i] <= k){
			mm[v[i]] = mm[v[i-1]];
		}else{
			mm[v[i]] = v[i] + k;
		}
	}

//	for(auto i : mm) cout << i.F << " " << i.S << endl;

	fo(i,p){
		int a,b; cin >> a >> b;
		--a,--b;
		if(mm[m[a]]==mm[m[b]]) cout << "Yes\n";
		else cout << "No\n";
	}
	
	return 0;
}