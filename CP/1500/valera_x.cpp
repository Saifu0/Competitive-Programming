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

	int n; cin >> n;
	string s[n];

	fo(i,n) cin >> s[i];

	//int i=n/2,j=n/2;

	bool flag = false;

	int cnt = 0;
	map<char,int> m;

	fo(i,n){
		fo(j,n){
			m[s[i][j]]++;
		}
	}

	if(m.size()>2 || m.size()==1){
		cout << "NO" << endl;
		return 0;	
	}
	
	fo(i,n){
		if(i&& s[i][i]!= s[i-1][i-1]){
			flag = true;
		}
	}

	if(flag){
		cout << "NO" << endl;
		return 0;
	}

	fo(i,n){
		if(i && s[i][n-i-1]!= s[i-1][n-i]){
			flag = true;
		}
	}

	if(!flag){
		char ch = s[0][0];
		if(m[ch] > (2*n-1)){
			cout << "NO" << endl;
			return 0;
		}
	}

	if(flag){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}

	return 0;
}