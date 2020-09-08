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

int get(int n){
	int c = 0;
	while(n>0){
		int rem = n%10;
		n /= 10;
		c += rem;
	}
	return c;
}

int32_t main(){
	NINJA;
	
	int t; cin >> t;
	while(t--){
		int a=0,b=0;
		int n; cin >> n;
		fo(i,n){
			int x,y; cin >> x >> y;
			x = get(x);
			y = get(y);
			if(x > y) a++;
			else if(x<y) b++;
			else a++,b++;
		}
		if(a > b) cout << 0 << " " << a << endl;
		else if(a<b) cout << 1 << " " << b << endl;
		else cout << 2 << " " << a << endl;
	}

	return 0;
}