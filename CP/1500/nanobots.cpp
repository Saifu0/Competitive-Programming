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

const int mxn = 514;
int a[mxn][mxn];
bool vis[mxn][mxn];
int n,f,k;
vector<pair<char,int>> ans;

int check(){
	int mx = -inf;
	int cnt = 0;
	int axis=-1, lvl=-1;
	int tot = 0;
	fo(i,n){
		int c=0;
		int sum=0;
		int cc=0;
		fo(j,n){
			if(sum+a[i][j] > f) break;
			if(a[i][j] != 0)c++;
			sum += a[i][j];
			cc++;
		}
		if(c>cnt){
			axis = 0;
			cnt = c;
			lvl = i+1;
			tot = cc;
		}
	}
	fo(i,n){
		int c = 0;
		int sum = 0;
		int cc=0;

		fo(j,n){
			if(sum + a[j][i] > f) break;
			if(a[j][i] != 0) c++;
			sum += a[j][i];
			cc++;
		}
		if(c>cnt){
			axis = 1;
			cnt = c;
			lvl = i+1;
			tot = cc;
		}
	}

	fo(i,n){
		int c=0;
		int sum=0;
		int cc=0;
		fo(j,n){
			if(sum+a[i][n-j-1] > f) break;
			if(a[i][n-j-1] != 0)c++;
			sum += a[i][n-j-1];
			cc++;
		}
		if(c>cnt){
			axis = 2;
			cnt = c;
			lvl = i+1;
			tot = cc;
		}
	}

	fo(i,n){
		int c = 0;
		int sum = 0;
		int cc=0;
		fo(j,n){
			if(sum + a[n-j-1][i] > f) break;
			if(a[n-1-j][i] != 0) c++;
			sum += a[n-j-1][i];
			cc++;
		}
		if(c>cnt){
			axis = 3;
			cnt = c;
			lvl = i+1;
			tot = cc;
		}
	}
	if(cnt==0) return -1;
	int c = tot;
	if(axis==0){
		fo(i,c) a[lvl-1][i] = 0;
		ans.pb({'L',lvl});
	}else if(axis==1){
		fo(i,c) a[i][lvl-1] = 0;
		ans.pb({'U',lvl});

	}else if(axis==2){
		fo(i,c) a[lvl-1][n-i-1] = 0;
		ans.pb({'R',lvl});

	}else{
		fo(i,c) a[n-i-1][lvl-1] = 0;
		ans.pb({'D',lvl});

	}

	bool ok=true;
	fo(i,n){
		fo(j,n){
			ok &= (a[i][j]==0);
		}
	}

	if(ok) return  -1;
	
	return 0;
}


int32_t main(){
	NINJA;

	cin >> n >> f;
	fo(i,n) fo(j,n) cin >> a[i][j];
	cin >> k;
	
	while(true){
		if(check()==-1){
			break;
		}
	}

	cout << ans.size() << endl;
	for(auto i : ans){
		cout << i.F << " " << i.S << endl;
	}

	
	return 0;
}