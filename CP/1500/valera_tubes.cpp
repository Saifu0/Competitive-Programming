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

int32_t main(){
	NINJA;

	int n,m,k;
	cin >> n >> m >> k;
	int a = (n*m)/k;

	int cnt = 0;
	vector<vector<ii>> comp;
	vii v;
	fo(i,n){
		fo(j,m){
			cnt++;
			v.pb({i+1,j+1});
			
			if(cnt==a){
				cnt=0;
				comp.pb(v);
				v.clear();
			}
			
		}
	}

	for(auto it : comp){
		cout << sz(it) << " ";
		for(auto i : it) cout << i.F << " " << i.S << " ";

		cout << endl;
	}
	
	return 0;
}