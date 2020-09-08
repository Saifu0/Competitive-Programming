#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 1234;
string mat[mxn];
int n,m;


typedef tuple<int,int,int> iii;
typedef tuple<int,int> xx;
typedef queue<iii> q;
typedef vector<xx> qqr;
typedef vector<qqr> qq;



bool valid(int x, int y, int dist){
	bool vis[mxn][mxn];
	memset(vis,false,sizeof vis);
	q q;
	q.push(make_tuple(x,y,0));
	vis[x][y] = true;
	while(!q.empty()){
		int d;
		tie(x,y,d) = q.front();
		q.pop();
		
		if(mat[x][y]=='M') return false;
		if(d>=dist) continue;
		if(x>0 && !vis[x-1][y] && (mat[x-1][y]=='.' ||mat[x-1][y]=='M' )){

			vis[x-1][y] = true;
			q.push(make_tuple(x-1,y,d+1));
		}
		if(y>0 && !vis[x][y-1] && (mat[x][y-1]=='.' || mat[x][y-1]=='M')){

			vis[x][y-1] = true;
			q.push(make_tuple(x,y-1,d+1));
		}
		if(x<n-1 && !vis[x+1][y] && (mat[x+1][y]=='.'|| mat[x+1][y]=='M')){

			vis[x+1][y] = true;
			q.push(make_tuple(x+1,y,d+1));
		}
		if(y<m-1 && !vis[x][y+1] && (mat[x][y+1]=='.' || mat[x][y+1]=='M')){

			vis[x][y+1] = true;
			q.push(make_tuple(x,y+1,d+1));
		}
	}
	return true;
}


int32_t main(){
	NINJA;
	int x=-1,y=-1;
	bool vis[mxn][mxn];
	memset(vis,false,sizeof(vis));
	cout << "yes" << endl;
	cin >> n >> m;
	
	fo(i,n) cin >> mat[i];
	
	fo(i,n){
		fo(j,n){
			if(mat[i][j]=='A'){
				x=i,y=j;
				break;
			}
		}
		if(y!=-1) break;
	}
	
	qq p(n,qqr(m));
	
	q q;
	q.push(make_tuple(x,y,0));
	vis[x][y] = true;
	bool f = false;
	int ax = x, ay = y;
	
	string ans;
	
	cout << "yes" << endl;
	
	while(!q.empty()){
		int d;
		tie(x,y,d) = q.front();
		q.pop();
		
		cout << "yes" << endl;
		
		if(x==0 || y==0 || x==n-1 || y==m-1){
			if(valid(x,y,d)){
				f = true;
			//	cout << "yes" << endl;
				while(x!=ax || y!=ay){
					int px,py;
					tie(px,py) = p[x][y];
					if(x>px) ans += 'D';
					else if(x<px) ans += 'U';
					else if(y>py) ans += 'R';
					else if(y<py) ans += 'L';
					x = px, y = py;
				}
			
				
			}
			reverse(ans.begin(),ans.end());
			break;
		}
		
		if(x>0 && !vis[x-1][y] && mat[x-1][y]=='.'){
			p[x-1][y] = p[x][y];
			vis[x-1][y] = true;
			q.push(make_tuple(x-1,y,d+1));
		}
		if(y>0 && !vis[x][y-1] && mat[x][y-1]=='.'){
			p[x][y-1] = p[x][y];
			vis[x][y-1] = true;
			q.push(make_tuple(x,y-1,d+1));
		}
		if(x<n-1 && !vis[x+1][y] && mat[x+1][y]=='.'){
			p[x+1][y] = p[x][y];
			vis[x+1][y] = true;
			q.push(make_tuple(x+1,y,d+1));
		}
		if(y<m-1 && !vis[x][y+1] && mat[x][y+1]=='.'){
			p[x][y+1] = p[x][y];
			vis[x][y+1] = true;
			q.push(make_tuple(x,y+1,d+1));
		}
	}
	
	if(f){
		cout << "YES" << endl;
		cout << ans.size() << endl;
		cout << ans << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}

