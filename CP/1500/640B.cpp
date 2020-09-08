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

	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int n1 = n - (k-1);
		if(n1 > 0 && n1%2){
			cout << "YES" << endl;
			fo(i,k-1) cout << "1 ";
			cout << n1 << endl;
			continue; 
		}
		int n2 = n - 2*(k-1);
		if(n2 > 0 && n2%2==0){
			cout << "YES" << endl;
			fo(i,k-1) cout << "2 ";
			cout << n2 << endl;
			continue;
		}
		cout << "NO" << endl;
	}
	
	return 0;
}