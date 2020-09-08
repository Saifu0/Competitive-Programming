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

const int mxn = 1000005;
int a[mxn];
vi t;
int m,flag=0;
string s;

void dfs(int c, int l, int r, int p){
	if(c==m){
		flag = 1;
		return;
	}
	if(flag) return;

	for(auto u : t){
		if(u==p) continue;
		if(c&1){
			if(r+u>l){
				a[c] = u;
				dfs(c+1,l,r+u,u);
				if(flag) return;
			}
		}else{
			if(l+u>r){
				a[c] = u;
				dfs(c+1,l+u,r,u);
				if(flag) return;
			}
		}
	}
}

int32_t main(){
	NINJA;

	cin >>s >> m;
	fo(i,10)
		if(s[i]=='1') t.pb(i+1);

	dfs(0,0,0,0);

	if(flag){
		cout << "YES" << endl;
		fo(i,m) cout << a[i] << " ";
		cout << endl;
	}else{
		cout << "NO" << endl;
	}
	
	return 0;
}