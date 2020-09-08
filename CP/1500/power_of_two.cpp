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

int32_t main(){
	NINJA;

	int n,k;
	cin >> n >> k;
	multiset<int> s;
	for(int i=30;i>=0;i--){
		if(n&(1<<i)){
			s.insert(1<<i);
		}
	}

	// for(auto i : s) cout << i << " ";
	// 	cout << endl;

	if(sz(s) > k){
		cout << "NO" << endl;
		return 0;
	}

	while(s.size() < k){
		auto it = s.end();
		it--;
		int val = *it;
		if(val==1){
			cout << "NO" << endl;
			return 0;
		}

		//cout << val << endl;

		s.erase(s.find(val));
		s.insert(val/2);
		s.insert(val/2);
	}

	cout << "YES" << endl;
	for(auto i : s) cout << i << " ";
	
	return 0;
}