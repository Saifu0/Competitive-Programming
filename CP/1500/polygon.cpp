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

bool vis[55][55];
int n;
string a[55];

bool check(int i, int j){
	bool ok1 = true, ok2 = true;
	
	if(a[i+1][j]=='1' || i+1==n) ok1 = true;
	else ok1 = false;

	if(a[i][j+1]=='1' || j+1==n) ok2 = true;
	else ok2 = false;

	return ok1 || ok2;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> n;
		

		fo(i,n) fo(j,n) vis[i][j] = false;

		fo(i,n) cin >> a[i];

		

		fo(i,n) fo(j,n) vis[i][j] = a[i][j] == '0';

		fo(i,n){
			fo(j,n){
				if(a[i][j]=='1'){
					if(check(i,j)) vis[i][j] = true;
				}
			}
		}

		bool ok = true;

		fo(i,n) fo(j,n) ok = ok &&vis[i][j];

		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}