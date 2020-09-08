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

const int mxn = 2e5+10;
int prime[mxn];

int32_t main(){
	NINJA;

	// memset(prime,true,sizeof(prime));
	// for(int i=2;i*i<=mxn;i++){
	// 	if(prime[i]){
	// 		for(int j=i*2;i<mxn;j+=i){
	// 			prime[j] = 0; 
	// 		}
	// 	}
	// }
	// vi p;
	// Fo(i,2,mxn) if(prime[i]) p.pb(i);
	// cout << sz(p) << endl;
	// unordered_set<int> need;
	// fo(i,sz(p)){
	// 	fo(j,sz(p)){
	// 		need.insert(p[i]*p[j]);
	// 	}
	// }
	// cout << sz(p) << endl;


	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n<31){
			cout << "NO" << endl;
		} 
        else if(n==36 || n==40 || n==44) {
            cout<<"YES"<<"\n";
	        if(n==36) cout<<"5 6 10 15"<<"\n";
	        if(n==40) cout<<"5 6 14 15"<<"\n";
	        if(n==44) cout<<"6 10 13 15"<<"\n";
        }
	        else{
				cout << "YES" << "\n";
				cout << "6 10 14 " << n-30 << "\n";
			}
	}
	
	return 0;
}