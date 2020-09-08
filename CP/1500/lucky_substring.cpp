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
	int n =sz(s);

	bool f = false,ff=  false;
	int c = 0, cc =0;
	fo(i,n){
		if(s[i]=='4') f = true,c++;
		if(s[i]=='7') ff = true,cc++;
	}

	if(!f&&!ff){
		cout << -1 << endl;
		return 0;
	}
	if(c>=cc){
		cout << 4 << endl;
	}else{
		cout << 7 << endl;
	}

	return 0;
}