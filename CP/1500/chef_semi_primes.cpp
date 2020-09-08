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

const int mxn = 210;

int32_t main(){
	NINJA;

	vi p;
	bool prime[mxn];
	memset(prime,true,sizeof(prime));
	for(int i=2;i<=sqrt(mxn);i++){
		if(prime[i]){
		//	p.pb(i);
			for(int j=i+i;j<=mxn;j+=i) prime[j] = false;
		}
	}

	for(int i=2;i<=mxn;i++){
		if(prime[i]) p.pb(i);
	}

	//for(auto i : p) cout << i << " ";

	//cout << endl;

	vi s;
	fo(i,sz(p)){
		fo(j,sz(p)){
			if(p[i]!=p[j]) s.pb(p[i]*p[j]);
		}
	}

	set<int> ss;
	fo(i,sz(s)){
		fo(j,sz(s)){
			ss.insert(s[i]+s[j]);
		}
	}

	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		if(ss.find(n)!=ss.end()){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}