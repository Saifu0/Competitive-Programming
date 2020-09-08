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

	int c1,c2,c3,c4; cin >> c1 >> c2 >> c3 >> c4;

	int n,m; cin >> n >> m;

	int a[n],b[m];
	fo(i,n) cin >> a[i];
	fo(i,m) cin >> b[i];

	int mn = c4;

	int tot = 0;

	fo(i,n){
		if(a[i]*c1 < c2) tot += a[i]*c1;
		else tot += c2;
	}

	if(tot>c3) tot = c3;
	if(tot>mn){
		cout << mn << endl;
		return 0;
	}

	int rep = 0;
	fo(i,m){
		if(b[i]*c1 < c2) rep += b[i]*c1;
		else rep += c2;
	}
	if(rep>c3) rep = c3;

	if(tot+rep>mn){
		cout << mn << endl;
		return 0;
	}else{
		cout << tot+rep << endl;
	}


	return 0;
}