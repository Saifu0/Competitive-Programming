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

const int mxn = 100000 + 100;
int d[mxn];
int cnt[6][mxn];

void init(){
	d[1] = 0;
	for(int p=2;p<=mxn;p++){
		int x=p;
		int c=0;
		for(int i=2;i*i<=x;i++){
			if(x%i==0){
				while(x%i==0) x /= i;
				c++;
			}
		}
		if(x>1) c++;
		if(c<=5) cnt[c][p]++;
	}

	for(int i=1;i<mxn;i++){
		for(int j=1;j<6;j++){
			cnt[j][i] += cnt[j][i-1];
		}
	}
}

int32_t main(){
	NINJA;

	init();
	int t; cin >> t;
	while(t--){
		int a,b,k;
		cin >> a >> b >> k;
		
		cout << cnt[k][b] - cnt[k][a-1] << endl;
	}
	
	return 0;
}