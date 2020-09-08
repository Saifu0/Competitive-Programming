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

const int mxn = 110;
int change[3][mxn];
int rate[3][mxn];

int check(int c, int d){
	return (rate[c][d] == max(max(rate[0][d],rate[1][d]),rate[2][d]));
}

int32_t main(){
	NINJA;
	freopen("measurement.in", "rt", stdin);
	freopen("measurement.out", "wt", stdout);
	int n; cin >> n;
	fo(i,n){
		int d,x; 
		string s; cin >>d >> s >> x;
		int c;
		if (s == "Bessie") c = 0;
	    if (s == "Elsie") c = 1;
	    if (s == "Mildred") c = 2;
	    change[c][d] = x;
	}
	rate[0][0] = rate[1][0] = rate[2][0] = 7;
	fo(c,3){
		for1(d,100){
			rate[c][d] = rate[c][d-1] + change[c][d];
		}
	}
	int cnt = 0;
	for1(d,100){
		if(check(0,d-1)!=check(0,d) || check(1,d-1)!=check(1,d) || check(2,d-1)!=check(2,d)) cnt++;
	}
	cout << cnt << endl;
	
	
	return 0;
}