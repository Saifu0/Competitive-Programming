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

	int n; cin >> n;
	vii a;

	for(int i=2;i*i<=n;i++){
		int x = 0;
		while(n%i==0){
			n /= i;
			++x;
		}
		a.pb({i,x});
	}
	if(n!=1) a.pb({n,1});

	int ans = 0;

	for(auto i : a){
		int s = i.S;
		int j = 1;
		while(j<=s){
			s-=j;
			j++;
			++ans;
		}
	}

	cout << ans << endl;
	
	return 0;
}