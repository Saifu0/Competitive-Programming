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

	int n,k; cin >> n >> k;
	// vi a;
	// if(n%2==1){
	// 	n-=1;
	// 	a.pb(1ll);
	// 	k--;
	// }
	// int l = k;
	// fo(i,k-1) a.pb(2ll), n-=2, l--;

	// int i = 0;
	// while((1ll<<i) < n){
	// 	i++;
	// }
	// l--;
	// // cout << (1ll<<i) << " ";

	// if(n==(1ll<<i) && l==0){
	// 	a.pb(n);
	// 	cout << "YES" << endl;
	// 	for(int i : a){
	// 		cout << i << " ";
	// 	}
	// }else{
	// 	cout << "NO" << endl;
	// }

	multiset<int> s;
	for(int i=30;i>=0;i--){
		if(n&(1ll<<i)) s.insert((1ll<<i));
	}

	if(sz(s) > k){
		cout << "NO" << endl;
		return 0;
	}

	while(sz(s) < k){
		auto it = s.end();
		it--;
		int val = *it;
		if(val==1){
			cout << "NO" << endl;
			return 0;
		}
		s.erase(s.find(val));
		s.insert(val/2);
		s.insert(val/2);
	}

	cout << "YES" << endl;
	for(auto i : s) cout << i << " ";
	
	return 0;
}