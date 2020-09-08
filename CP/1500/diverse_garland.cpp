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

	int n; cin >> n;
	string s; cin >> s;
	int ans =0;

	fo(i,n){
		if(s[i]==s[i-1]){
			if(s[i-1]!='R' && s[i+1]!='R'){
				ans++;
				s[i] = 'R';
			}else if(s[i-1]!='B' && s[i+1]!='B'){
				ans++;
				s[i] = 'B';
			}else if(s[i-1]!='G' && s[i+1]!='G'){
				ans++;
				s[i] = 'G';
			}
		}
	}

	cout << ans << endl;
	cout << s <<endl;
	
	return 0;
}