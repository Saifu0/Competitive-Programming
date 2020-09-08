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

int getr(int x){
	while(x%2==0) x /= 2;
	return x;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int a,b; cin >> a >> b;
		if(a < b) swap(a,b);

		int l = getr(b);
		int r = getr(a);

		if(l!=r){
			cout << -1 << endl;
			continue;
		}

		if(a==b){
			cout << 0 << endl;
			continue;
		}

		int cnt = 0;

		int rem = a/b;

		while(rem >= 8){
			rem /= 8;
			cnt++;
		}

		// if(rem == b){
		// 	cout << cnt << endl;
		// 	continue;
		// }

		// while(rem%4==0 && rem > b){
		// 	rem /= 4;
		// 	cnt++; 
		// }

		// if(rem == b ){
		// 	cout << cnt << endl;
		// 	continue;

		// }

		// while(rem%2==0 && rem > b){
		// 	rem /= 2;
		// 	cnt++;
		// }

		// if(rem == b){
		// 	cout << cnt << endl;
		// 	continue;
		// }
		
		if(rem>1) cnt++;
		cout << cnt << endl;
		
	}
	
	return 0;
}