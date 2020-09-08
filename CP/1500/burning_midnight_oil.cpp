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

int n,k;

bool check(int m){
	int s = k;
	int sum = m;
	while(m/s){
		sum += m/s;
		s *= k;
	}
	return sum >= n;
}

int32_t main(){
	NINJA;

	cin >> n >> k;

	int l = 0,r = 1e12;

	int ans;
	while(l<=r){
		int m = (l+r)/2;
		
		if(check(m)){
			ans = m;
			r = m-1;
		}else{
			l = m+1;
		}
	}

	cout << ans << endl;

	return 0;
}