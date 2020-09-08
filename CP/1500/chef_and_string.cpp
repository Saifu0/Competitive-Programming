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

	int t; cin >>  t;
	while(t--){
		string a; cin >> a;
		int n = sz(a);

		// int girl = 0, boy = 0;
// 
		int cnt = 0;
		Fo(i,1,n){
			if((a[i]=='x' && a[i-1]=='y') || (a[i]=='y' && a[i-1]=='x')) cnt++, i++;
		}
		
		// if(ans > 1) ans = (ans*(ans-1))/2;

		cout << cnt << endl;
	}
	
	return 0;
}