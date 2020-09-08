#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007


int main(){
	NINJA;
	string s; cin >> s;
	int n = sz(s);
	int dp[n+1];
	memset(dp,0,sizeof(dp));

	Fo(i,1,n){
		dp[i] = dp[i-1];
		if(s[i]==s[i-1]) dp[i] += 1;
	}

	//fo(i,n+1) cout << dp[i] << endl;

	int m; cin >> m;
	while(m--){
		int f,s; cin >> f >> s;
		--f,--s;
		cout << dp[s] - dp[f] << endl;
	}

	return 0;
}