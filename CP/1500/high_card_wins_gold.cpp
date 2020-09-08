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

int32_t main(){
	NINJA;
  	freopen("cardgame.in", "rt", stdin);
 	freopen("cardgame.out", "wt", stdout);
	int n; cin >> n;
	set<int> a;
	vi ar(n);
	fo(i,n){
		cin >> ar[i];
		int x = ar[i];
		a.insert(x);
	}
	set<int> b;
	for1(i,2*n) if(a.find(i)==a.end()) b.insert(i);
	int i=0;
	set<int> high,low;
	bool ok = 0;
	for(auto each : b){
		if(i==n/2) ok = 1;
		if(ok==1) high.insert(each);
		else low.insert(-each);
		i++;
	}

	int cnt =0;
	fo(i,n/2){
		auto it = high.lower_bound(ar[i]);
		if(it!=high.end()){
			cnt++;
			high.erase(it);
		}
	}
	for(int i=n/2;i<n;i++){
		int x=  -ar[i];
		auto it = low.lower_bound(x);
		if(it!=low.end()){
			cnt++;
			low.erase(it);
		}
	}
	cout << cnt << endl;
	
	return 0;
}