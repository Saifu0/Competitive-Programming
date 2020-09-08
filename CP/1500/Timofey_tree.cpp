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

const int mxn = 1e5+50;
int f[mxn],s[mxn],c[mxn];

int32_t main(){
	NINJA;

	mp m;
	int n; cin >> n;

	fo(i,n-1) cin >> f[i+1] >> s[i+1];
	fo(i,n) cin >> c[i+1], m[i+1] = 0;

	int me = 0;
	Fo(i,1,n){
		if(c[f[i]]!=c[s[i]]){
			m[f[i]]++, m[s[i]]++;
			me++;
		}
	}

	int p = -1;
	for(auto i : m){
		if(i.S == me){
			p = i.F;
			break;
		}
	}
	
	if(p==-1) cout << "NO" << endl;
	else cout << "YES\n" << p << endl; 
	return 0;
}