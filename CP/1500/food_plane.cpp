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

	string s; cin >> s;
	string a = s.substr(0,sz(s)-1); char c = s[sz(s)-1];

	int n = 0;
	fo(i,sz(a)){
		n = n*10 + (a[i]-'0');
	}

	int rem = n%4;
	int need = (n-rem)/4;
	int ans = 0;
	if(rem%2==1){
		ans = need*16;
		if(c=='f') {ans += 1;}
		else if(c=='e') ans += 2;
		else if(c=='d') ans += 3;
		else if(c=='a') ans += 4;
		else if(c=='b') ans += 5;
		else ans += 6;
	}else{
		ans = (rem==0 ? (need-1)*16 : need*16) + 7;
		if(c=='f') ans += 1;
		else if(c=='e') ans += 2;
		else if(c=='d') ans += 3;
		else if(c=='a') ans += 4;
		else if(c=='b') ans += 5;
		else ans += 6;
	}

	cout << ans << endl;
	
	return 0;
}