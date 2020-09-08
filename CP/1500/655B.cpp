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

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n%2==0){
			cout << n/2 << " " << n/2 << endl;
		}else{
			unordered_set<int> a;
			for(int i=1;i*i<=n;i++){
				if(n%i==0){
					if(n/i==i) a.insert(i);
					else{
						a.insert(n/i);
						a.insert(i);
					}
				}
			}
			int l=1,r=n-1;
			for(auto i : a){
				// cout << i << " ";
				if((n-i)%i==0){
					if(abs(n-i-i) < abs(l-r)) l = i, r = n-i;
				}
			}
			// cout << l << " " <<r << endl;
			if(abs(l-r) < abs(n-2)){
				cout << l << " " << r << endl;
			}else{
				cout << 1 << " " << n-1 << endl;
			}
		}
	}

	
	return 0;
}