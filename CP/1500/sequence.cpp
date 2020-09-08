#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

// void solve(int n){
// 	if(n==1){
// 		//cout << 1 << endl;
// 		return;
// 	}

// 	if(n%2){
// 		int x = n*sqrt(n);
// 		cout << x << " ";
// 		solve(x);
// 	}else{
// 		int x = sqrt(n);
// 		cout << x << " ";
// 		solve(x);
// 	}
// }

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		
		mp m;
		
		cout << n << " ";
    
    //vis[n] = true;
		vi store;
		while(m[n]==0){
			if(n%2){
				m[n] =1;

				n = n*sqrt(n);
				store.pb(n);
				//cout << n << " ";
			}else{
			   	m[n]==1;

				n = sqrt(n);
				store.pb(n);
				//cout << n << " ";
			}
		}
		fo(i,sz(store)-1) cout << store[i] << " ";
		cout <<  endl;
	}

	return 0;
}