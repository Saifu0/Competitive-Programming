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

const int mxn = 1e5+500;
int a[mxn];

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		

		vector<ll> store;
		vector<ll>::iterator it;
		fo(i,n){
			ll x; cin >> x;
			it = upper_bound(store.begin(), store.end(),x);

			//cout << *it << endl;

			//for(auto i : store) cout << i << " ";
			//cout << endl;

			if(it!=store.end()) *it = x;
			else store.pb(x);	
		}
		

		cout << sz(store) << " ";
		for(int i : store) cout << i << " ";
		cout << endl;
	}

	return 0;
}