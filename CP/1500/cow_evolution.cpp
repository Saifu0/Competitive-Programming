// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn= 110;
vector<string> g[mxn];
vector<string> a;
int n;

int check(string x, string y){
	int A=0,B=0,AB=0;
	fo(i,n){
		bool has_a=0,has_b=0;
		vector<string> t = g[i];
		for(auto each : t){
			if(each==x) has_a=1;
			if(each==y)has_b=1;
		}
		if(has_a&&has_b) AB++;
		else if(has_a) A++;
		else if(has_b) B++;
	}
	return AB>0&&A>0&&B>0;
}

int32_t main(){
	NINJA;
  	freopen("evolution.in", "rt", stdin);
 	freopen("evolution.out", "wt", stdout);
	cin >> n;
	fo(i,n){
		int k; cin >> k;
		fo(j,k){
			string s; cin >> s;
			g[i].pb(s);
			bool f = 1;
			for(auto each : a) f &= (each!=s);
			if(f) a.pb(s);
		}
	}

	bool ok = 1;
	fo(i,sz(a)){
		Fo(j,i+1,sz(a)){
			if(check(a[i],a[j])) ok = false;
		}
	}
	if(ok) cout <<"yes" << endl;
	else cout << "no" << endl;
	
	return 0;
}