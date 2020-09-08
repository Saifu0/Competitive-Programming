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

char board[10][10];
int cnt = 0;
int dx[] = {-1,-2,-2,2,2,1,1,-1};
int dy[] = {2,1,-1,1,-1,2,-2,-2};

bool check(int r, int c){
	for1(i,8) if(board[r][i]=='R') return false;
	for1(i,8) if(board[i][c]=='R') return false;

	fo(i,8){
		int x = dx[i] + r;
		int y = dy[i] + c;
		if(x <= 1 && x >= 8 && y<=1 && y>=8 && board[x][y]=='K') return false;
	}
	return true;
}

int32_t main(){
	NINJA;

	string a,b; cin >> a >> b;

	for1(i,8){
		for1(j,8){
			board[i][j] = '0';
		}
	}

	board[a[0]-'a'+1][a[1]-'0'] = 'R';
	board[b[0]-'a'+1][b[1]-'0'] = 'K';

	for1(i,8){
		for1(j,8){
			if(check(i,j)){
				cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}