// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define all(a) a.begin(),a.end()
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
	
	while(1){
	int n; cin >> n;
	if(n==0) break;
		int temp = n;
		string ans = "";
		if(n<0) ans = "-1$x$", n *= -1;
		while(n%2==0){
			n /= 2;
			ans += '2';
			ans += '$';
			ans += 'x';
			ans += '$';
		}

	for(int i=3;i*i<=n;i+=2){
		while(n%i==0){
			n /= i;
			ans += to_string(i);
			ans += '$';
			ans += 'x';
			ans += '$';
		}
	}
	if(n > 2) ans += to_string(n), ans += '$', ans +='x', ans += '$';
	cout << temp << " = ";
	//	cout << ans.substr(0,sz(ans)-2) << endl;
	fo(i,sz(ans)-2) cout << (ans[i]=='$' ? ' ' : ans[i] );
    cout << endl;
	}
    return 0;
}
