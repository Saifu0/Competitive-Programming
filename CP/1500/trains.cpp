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

int32_t main(){
	NINJA;

	int a,b; cin >> a >> b;
	int lcm = (a*b)/__gcd(a,b);

	int c1 = 0, c2 = 0;
	if(a > b) c1++;
	if(a < b) c2++;

	// cout << lcm << endl;

	// int i = 1;
	// while(a < lcm){
	// 	c1++;
	// 	a = a*i++;
	// }

	// i = 1;
	// while(b < lcm){
	// 	c2++;
	// 	b = b*i++;
	// }
	// cout << c1 << " " << c2 << endl;
	c1 += lcm/a;
	c2 += lcm/b;

	if(c1 > c2) cout << "Dasha" << endl;
	else if(c1 < c2) cout << "Masha" << endl;
	else cout << "Equal" << endl;
	
	return 0;
}