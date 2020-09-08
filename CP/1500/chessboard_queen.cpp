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

const int mxn = 20;
string board[mxn];
int column[mxn];
int dia1[mxn];
int dia2[mxn];
const int n = 8;
int cnt;

void solve(int y){
	if(y==n){
		cnt++;
		return;
	}
	for(int x=0;x<n;x++){
		if(column[x] || dia1[x+y] || dia2[x-y+n-1] || board[x][y]=='*') continue;
		column[x] = dia1[x+y] = dia2[x-y+n-1] = 1;
		solve(y+1);
		column[x] = dia1[x+y] = dia2[x-y+n-1] = 0;
	}
}

int main(){
	NINJA;

	fo(i,8) cin >> board[i];

	solve(0);
	cout << cnt << endl;

	return 0;
}