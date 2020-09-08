#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

int lcm(int a, int b){
	return a / __gcd(a,b) *b;
}

int32_t main(){
	NINJA;
	
	int x; cin >> x;
	
	int ans;
	
	for(int i=1;i*i<=x;i++){
		if(x%i==0 && lcm(i,x/i)==x){
			ans = i;
		}
	}
	
	cout << ans << " " << x/ans << endl;
	
	return 0;
}

