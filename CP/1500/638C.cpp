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
		int n,k; cin >> n >> k;
		string s; cin >> s;


		sort(s.begin(), s.end());

		if(s[0]!=s[k-1]){
			cout << s[k-1] << endl;
			continue;
		}

		cout << s[0];
		if(s[k]!=s[n-1]){
			for(int i=k;i<n;i++){
				cout << s[i];
			}
			cout << endl;
		}else{
			for(int i=1;i<=ceil((n-k)/(k*1.0));i++) cout << s[n-1];
			cout << endl;
		}


		
	}
	
	return 0;
}