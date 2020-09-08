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

int last[60];

int logbase2(int n){
	int cnt=0;
	while((1LL<<(cnt+1))<=n) cnt++;
	return cnt;
}

void init(){
	int a=0,b=1;
	fo(i,60){
		last[i] = a%10;
		int c = a;
		a = b;
		b = b+c;
	}
}

int32_t main(){
	NINJA;

	init();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		n = 1LL<<logbase2(n);

		cout << last[(n-1)%60] << endl;
	}
	
	return 0;
}