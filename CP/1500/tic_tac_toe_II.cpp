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

bool win(string s){
	bool rows = 
		(s[0] != '.' && s[0] == s[1] && s[1] == s[2]) ||
		(s[3] != '.' && s[3] == s[4] && s[4] == s[5]) ||
		(s[6] != '.' && s[6] == s[7] && s[7] == s[8]);
	bool columns =
		(s[0] != '.' && s[0] == s[3] && s[3] == s[6]) ||
		(s[1] != '.' && s[1] == s[4] && s[4] == s[7]) ||
		(s[2] != '.' && s[2] == s[5] && s[5] == s[8]);

	bool diagonals =
		(s[0] != '.' && s[0] == s[4] && s[4] == s[8]) ||
		(s[2] != '.' && s[2] == s[4] && s[4] == s[6]);

	return rows || columns || diagonals;

}

int32_t main(){
	NINJA;

	while(true){
		string board;
		cin >> board;
		if(board=="end") break;

		queue<pair<string,bool>> q;
		q.push({".........",1});

		string ans = "invalid";
		while(!q.empty()){
			string cur = q.front().F;
			bool ok = q.front().S;
			q.pop();

			if(cur==board){
				ans = "valid";
				break;
			}
			if(win(cur)) continue;
			fo(i,9){
				if(cur[i]=='.'){
					cur[i] = (ok ? 'X' : 'O');
					if(cur[i]==board[i]) q.push({cur,ok^1});
					cur[i] = '.';
				}
			}
		}
		cout << ans << endl;
		// cin >> t;
	}
	
	return 0;
}