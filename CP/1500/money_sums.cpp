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

const int mxn = 123;
ll a[mxn];
ll dp[mxn];

int main(){
	NINJA;

	ll n; cin >> n;
	fo(i,n) cin >> a[i];

	vector<bool> dp(n*1000+10);

	//cout << dp.size() << endl;

	fo(i,n){
		for(int j=dp.size()-1;j>=0;j--){
			if(dp[j]){
				dp[j+a[i]] = 1;
			}
		}
		dp[a[i]] = 1;
	}

	int cnt = 0;
	for(int i=0;i<dp.size();i++){
		if(dp[i]) cnt++;
	}

	cout << cnt << endl;
	for(int i=0;i<dp.size();i++){
		if(dp[i]) cout << i << " ";
	}



	return 0;
}