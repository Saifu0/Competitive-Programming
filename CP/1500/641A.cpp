#include<bits/stdc++.h>
using namespace std;

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
	// c_p_c();

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s(200,'a');
		cout << s << endl;
		fo(i,n){
			int x; cin >> x;
			s[x] = s[x] =='a' ? 'b' : 'a';
			cout << s << endl;
		}
	}

	return 0;
}