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

int lcm(int x, int y){
	return (x*y)/__gcd(x,y);
}

int32_t main(){
	NINJA;

	int n; cin >> n;

	int t=min((int)50, n);

	int res=1;

	for(int i=0;i<t;i++){
		for(int j=i;j<t;j++){
			for(int k=j;k<t;k++){
				res = max(res,lcm(n-i,lcm(n-k,n-j)));
			}
		}
	}

	cout << res << endl;
	
	return 0;
}