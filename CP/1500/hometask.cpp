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

int32_t main(){
	NINJA;

	int n; cin >> n;
	vi a(n);

	bool f = 0;
	int sum = 0;

	fo(i,n){
		cin >> a[i];
		if(a[i]==0) f = 1; 
		sum += a[i];
	}

	if(!f){
		cout << -1 << endl;
		return 0;
	}
	cout << sum << endl;
	sort(a.rbegin(), a.rend());

	int i = n-1;
	while(a[i]==0 && i>=0) i--;
	while(true){
		if(sum%3==0) break;
		sum -= a[i];
		i--;
	}

	for(auto i : a) cout << i;


	
	return 0;
}