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

bool isPrime(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return false;
	}

	return true;
}

int32_t main(){
	NINJA;

	int n; cin >> n;
	vi a(n);

	fo(i,n) cin >> a[i];

	set<int> s;

	fo(i,n){
		if(isPrime(a[i])){
			s.insert(a[i]);
		}
	}

	fo(i,n){
		if(s.find(a[i])==s.end()){
			bool ok = 1;
			for(auto it : s){
				ok = ok && (a[i]%it!=0 && it%a[i]!=0);
			}
			if(ok)
			s.insert(a[i]);
		}
	}
	
	if(sz(s)>1)
	cout << sz(s) << endl;
	else cout << 0 << endl;

	return 0;
}