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

const int mxn = 2e5+10;
int cnt[mxn];
int used[mxn];

int convert(char c){
	if(c>='a' && c <= 'z') return c - 'a' + 'A';
	return c - 'A' + 'a';
}

int32_t main(){
	NINJA;
	
	string a,b; cin >> a >> b;
	mp ma,mb;

	for(char c : b) cnt[c]++;
	
	int c1 = 0, c2 = 0;
	
	// int i = 0;
	fo(i,sz(a)){
		char c = a[i];
		if(cnt[c]){
			c1++;
			used[i] = 1;
			cnt[c]--;
		}
		// i++;
	}

	// i = 0;
	fo(i,sz(a)){
		char c = a[i];
		if(used[i]) continue;
		int p = convert(c);
		if(cnt[p]){
		cnt[p]--;
		c2++;}
		// i++;
	}
	

	cout << c1 << " " << c2 << endl;
	
	return 0;
}
