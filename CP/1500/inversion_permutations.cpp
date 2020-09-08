#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007


int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k,r; cin >> n >> k >> r;
		string ans = "", s="";

		Fo(i,1,n+1){
			ans += to_string(i);
			s+= i + '0';
		}

		//cout << ans << endl;

		while(k--){
			next_permutation(ans.begin(), ans.end());
		}

		int cnt =0;

		fo(i,n){
			if(ans[i]!=s[i]){
				cnt++;
			}
		}

		if(cnt>r){
			cout << -1 << endl;
		}else{
			for(char c: ans) cout << c << " ";
			cout << endl;
		}
	}
	

	return 0;
}