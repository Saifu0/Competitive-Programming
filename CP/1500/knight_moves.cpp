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

int n = 8, m = 8;


int dx[] = {-1,1,2,2,1,-1,-2,-2};
int dy[] = {2,2,1,-1,-2,-2,-1,1};
bool vis[10][10];


int32_t main(){
	NINJA;

	string a,b;
	while(cin >> a >> b){
		int y1 = a[0] -'a' + 1;
		int y2 = b[0] - 'a' + 1;
		int x1 = a[1] - '0';
		int x2 = b[1] -'0';

		memset(vis,false,sizeof(vis));
		
		queue<pair<int,ii>> q;
		q.push({0,{x1,y1}});
		int res = 0;
		while(!q.empty()){
			int cnt = q.front().F;
			ii temp = q.front().S;
			q.pop();
			if(temp.F == x2 && temp.S == y2){
				res = cnt;
				break;
			}

			vis[temp.F][temp.S] = 1;
			fo(i,8){
				int nx = temp.F + dx[i];
				int ny = temp.S + dy[i];
				if(nx >= 1 && nx <=8 && ny >= 1 && ny <= 8 && !vis[nx][ny]){
					vis[nx][ny] = 1;
					q.push({cnt+1,{nx,ny}});
				}
			}
		}
		cout << "To get from " << a << " to " << b << " takes " << res << " knight moves." << endl;
	}
	
	return 0;
}