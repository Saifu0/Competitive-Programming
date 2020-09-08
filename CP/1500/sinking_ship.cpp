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

	map<int, vector<string>> m;

	fo(i,n){
		string a,b;
		cin >> a >> b;
		int x;
		if(b=="rat") x = 1;
		else if(b=="woman" || b=="child") x = 2;
		else if(b=="man") x = 3;
		else x = 4;
		m[x].pb(a);
	}

	Fo(i,1,5){
		for(auto it : m[i]) cout << it << endl;
	}

	return 0;
}

