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
		int n0,n1,n2; cin >> n0 >> n1 >> n2;
		if(n1==0){
			if(n0!=0){
				cout << string(n0+1,'0') << endl;
			}else{
				cout << string(n2+1,'1') << endl;
			}
			continue;
		}
		string ans;
		fo(i,n1+1){
			if(i&1) ans += '0';
			else ans += '1';
		}

		ans.insert(1,string(n0,'0'));
		ans.insert(0,string(n2,'1'));
		cout << ans << endl;
	}
	
	return 0;
}