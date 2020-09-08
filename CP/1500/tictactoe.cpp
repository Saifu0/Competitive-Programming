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
	// ifstream cin ("tttt.in");
 //    ofstream cout ("tttt.out");
	string s[3]; 
	fo(i,3) cin >> s[i];

	int single = 0, duo = 0;

	fo(i,3){
		set<char> c;
		fo(j,3) c.insert(s[i][j]);
		if(sz(c)==1) single++;
		if(sz(c)==2) duo++;
	}

	fo(i,3){
		set<char> c;
		fo(j,3) c.insert(s[j][i]);
		if(sz(c)==1) single++;
		if(sz(c)==2) duo++;
	}

	set<int> c,d;
	fo(i,3){
		c.insert(s[i][i]);
		d.insert(s[i][2-i]);
		// cout << s[i][2-i] << " ";
	}
	// cout << sz(d) << "\n";
	if(sz(c)==1) single++;
	if(sz(c)==2) duo++;
	if(sz(d)==1) single++;
	if(sz(d)==2) duo++;
	cout << single << endl << duo << endl;
	
	return 0;
}