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

string modified(string&s, int n, int k){
	string res_pref = s.substr(k-1,n-k+1);
	string res_suf = s.substr(0,k-1);

	if(n%2 == k%2) reverse(res_suf.begin(),res_suf.end());
	return res_pref + res_suf;
}

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;

		string best_s = modified(s,n,1);
		int best_a  = 1;

		Fo(i,2,n+1){
			string temp = modified(s,n,i);
			if(temp < best_s){
				best_s = temp;
				best_a = i;
			}
		}

		cout << best_s << endl;
		cout << best_a << endl;

	}

	return 0;
}