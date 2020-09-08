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

bool board[10][10];
int R,C;
int d1[15];
int d2[15];
int rows[15];
int ans[15];
int cur = 0;



void solve(int r, int c){
	if(c == 8){
		printf("%2d      ", cur++);
		printf("%d", ans[0] + 1);
		for (int i = 1; i < 8; i++)
			printf(" %d", ans[i] + 1);
		puts("");
	}

	if(c==C) solve(r,c+1);
	else{
		for(int i=0;i<8;i++){
			if(rows[i] || d2[c+i] || d1[c-i+7]) continue;
			rows[i] = d2[c+i] = d1[c-i+7] = 1;
			ans[c] = i;
			solve(r,c+1);
			rows[i] = d2[c+i] = d1[c-i+7] = 0;
		}
	}
	
}

void clear(){
	fo(i,10) fo(j,10) board[i][j] = 0;
	fo(i,15) rows[i] = d1[i] = d2[i] =ans[i] =  0;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	int i = 0;
	while(t--){
		clear();
		cin >> R >> C;
		--R,--C;
		rows[R] = d1[C-R+7] = d2[R+C] = 1;
		ans[C] = R;
		cur = 1;
		board[R][C] = 1;
		if (i++) puts("");
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		solve(R,0ll);
	}
	
	return 0;
}