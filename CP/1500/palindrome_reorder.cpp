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

	string s; cin >> s;
	int n = sz(s);

	map<char,int> m;

	fo(i,n){
		m[s[i]]++;
	}

	int cnt = 0;
	for(auto it : m){
		if(it.S%2) cnt++;
	}

	if(cnt>1){
		cout << "NO SOLUTION" << endl;
		return 0;
	}

	string ans = "";

	bool flag = false;
	char ch;

	for(auto it : m){
		if(it.S%2==0){
			int  nn = it.S/2;
			fo(i,nn) ans += it.F;
		}else{
			flag = true;
			ch = it.F;
			int nn = it.S/2;
			fo(i,nn) ans += it.F;
		}
	}

	//cout << ch << endl;

	string res = ans;
	reverse(res.begin(), res.end());

	if(flag)
		ans = ans + ch + res;
	else
		ans = ans + res;

	cout << ans << endl;

	return 0;
}