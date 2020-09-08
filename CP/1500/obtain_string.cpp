#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
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
int dp[mxn][26];

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s,t;  cin >> s >> t;
		fo(i,sz(s)+5) fo(j,26) dp[i][j] = inf;

		for(int i=sz(s)-1;i>=0;i--){
			fo(j,26){
				dp[i][j] = dp[i+1][j];
			}
			dp[i][s[i]-'a'] = i;
		}

		// bool f = 0;
		// for(char ch : t){
		// 	if(s.find(ch)==string::npos){
		// 		cout << -1 << endl;
		// 		f = 1;
		// 		break;
		// 	}
		// }

		//if(f) continue;

		// fo(i,sz(s)){
		// 	fo(j,26){
		// 		cout << dp[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }

		int pos = 0, ans = 1;

		fo(i,sz(t)){
			if(pos == sz(s)){
				pos = 0;
				ans++;
			}

			if(dp[pos][t[i]-'a']==inf){
				pos = 0;
				ans +=1;
			}

			if(dp[pos][t[i]-'a']==inf && pos==0){
				ans = inf;
				break;
			}

			pos = dp[pos][t[i]-'a'] +1 ;
		}

		if(ans==inf) cout << -1 << endl;
		else  cout << ans << endl;
		
	}
	
	return 0;
}