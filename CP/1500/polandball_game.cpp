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

	int n,m; cin >> n >> m;
	set<string> a,b;

	fo(i,n){
		string s; cin >> s;
		a.insert(s);
	}

	fo(i,m){
		string s; cin >> s;
		b.insert(s);
	}

	
		
	int dif=0,same=0;

	for(auto i : a){
		bool f = 1;
		for(auto j : b){
			if(j==i){
				f = 0;
				break;
			}
		}
		if(f) dif++;
		else same++;
	}
	// bool ok = 0;
	// if(same>0) ok =  1;

	// // cout << same << endl;

	// bool g = 0;

	// if(dif==0) g = 1;

	// if(ok&&g) cout << "YES" << endl;
	// else{
	// 	if(sz(a)-same >= sz(b)-same) cout << "YES" << endl;
	// 	else cout << "NO" << endl;
	// }
	
	int pos1 = n-same;
	int pos2 = m-same;
	if(same&1) pos1++;

	if(pos1>pos2) cout << "YES" << endl;

	else cout << "NO" << endl;


	// }
	
	return 0;
}