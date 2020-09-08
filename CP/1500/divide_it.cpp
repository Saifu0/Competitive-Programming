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
		// queue<pair<int,int>> q;
		// q.push({n,0});

		// int ans =-1;
		// while(!q.empty()){
		// 	int x = q.front().F;
		// 	int c = q.front().S;
		// 	q.pop();
		// 	if(x==1){
		// 		ans = c;
		// 		break;
		// 	}
		// 	bool f =1,g=1,k=1;
		// 	if(x%2==0) q.push({n/2,c+1}), f=0;
		// 	if(x%3==0) q.push({(2*n)/3,c+1}),g=0;
		// 	if(x%5==0) q.push({(4*n)/3,c+1}),k=0;
		// 	if(f&&g&&k) break;
		// }

		int cnt = 0;
		
		while(1){
			bool ok =0;
			while(n%2==0 || n%3==0 || n%5==0){
				if(n%2==0) n=n/2;
				else if(n%3==0) n=(2*n)/3;
				else n=(4*n)/5;
				cnt++;
				ok = 1;
			}
			if(ok==0) break;
		}

		if(n > 1) cout << -1 << endl;
		else cout << cnt << endl;	
	}
	
	return 0;
}
