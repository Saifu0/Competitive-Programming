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

	if(s.find("AB") == string::npos || s.find("BA")==string::npos){
		cout << "NO" << endl;
		return 0;
	}

	int ps = s.find("BA");

	if(s.find("AB",ps+2) != string::npos){  //second arrguments tell from where to search in the string..
		cout << "YES" << endl;	
		return 0;
	}

	ps = s.find("AB");
	if(s.find("BA",ps+2) != string::npos){
		cout << "YES" << endl;
		return 0;
	}

	cout << "NO" <<  endl;

	return 0;
}