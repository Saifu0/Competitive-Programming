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
		string s[9];
		fo(i,9) cin >> s[i];

		vi a = {0,4,8,1,5,6,2,3,7};
		for(int i=0;i<9;i++){
			int j = a[i];
			s[i][j] = (s[i][j]=='9' ? '1' : s[i][j]+1);
		}

		fo(i,9) cout << s[i] << endl;
	}

	return 0;
}