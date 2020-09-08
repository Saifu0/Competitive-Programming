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

string a,b;
int need;

int32_t main(){
	NINJA;

	cin >> a >> b;
	for(char c : a) need += (c == '+' ? 1 : -1);
	int cur = 0;	
	int move = 0;

	for(char c : b){
		if(c=='?') move++;
		else cur += (c == '+' ? 1 : -1);
	}

	bool ok = solve(move,1,cur) || solve(move,-1,cur);
	if(ok) cout << "Yes" << endl;
	else cout << "NO" << endl;
	
	return 0;
}