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

int get(int n){
	int r = 1;
	while((r&n)==0) r *= 2;
	return r;
}

int32_t main(){
	NINJA;

	int s,l; cin >> s >> l;
	vi a;
	for(int i=l;i>=1;i--){
		int p = get(i);
		if(s >= p){
			a.pb(i);
			s -= p;
		} 
	}
	if(s) cout << -1 << endl;
	else{
		cout << sz(a) << endl;
		for(int i : a) cout << i << " ";
	}
	
	return 0;
}
