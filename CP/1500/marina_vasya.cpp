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

char other(char a, char b){
	char c='a';
	while(a==c || b==c) c++;
	return c;
}

int32_t main(){
	NINJA;

	int n,t; cin >> n >> t;
	int same = 0, dif = 0;
	string a,b; cin >> a>> b;
	fo(i,n) same += (a[i]==b[i]), dif += (a[i]!=b[i]);
	if(t<(dif+1)/2){
		cout << -1 << endl;
		return 0;
	}
	string ans;
	int x = min(n-t,same);
	int y = max(n-t-same,0ll);
	int z = max(n-t-same,0ll);
	fo(i,n){
		if(a[i]==b[i]){
			if(x>0) ans += a[i], x--;
			else ans += other(a[i],b[i]);
		}else{
			if(y>0) ans += a[i], y--;
			else if(z>0) ans += b[i], z--;
			else ans += other(a[i],b[i]);
		}
	}
	cout << ans << endl;
	
	return 0;
}