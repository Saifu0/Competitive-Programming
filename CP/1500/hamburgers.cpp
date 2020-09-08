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

int cnt[3];
int n[3];
int p[3];
int tot;

bool check(int m){
	int need=0;
	fo(i,3){
		int xx = max(0ll,cnt[i]*m - n[i]);
		need += xx*p[i];
	}
	return need <= tot;
}

int32_t main(){
	NINJA;

	string s; cin >> s;
	for(char c : s){
		if(c=='B') cnt[0]++;
		if(c=='S') cnt[1]++;
		if(c=='C') cnt[2]++;
	}

	fo(i,3) cin >> n[i];
	fo(i,3) cin >> p[i];

	cin >> tot;

	int l=0,r=1e13;
	int ans = 0;
	while(l<=r){
		int m = (l+r)/2;
		if(check(m)){
			ans =max(m,ans);
			l = m+1;
		}else r = m-1;
	}

	cout << ans << endl;
	
	return 0;
}