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

const int mxn = 2e5+500;
vii a;

int main(){
	NINJA;

	int n; cin >> n;
	fo(i,n){
		int f,s; cin >> f >> s;
		a.pb({f,s});
	}

	sort(a.begin(), a.end());

	ll tot = 0;

	//ll start = a[0].F;
	ll start = 0;

	Fo(i,0,n){
		start += a[i].F;
		tot += a[i].S - start;
	}

	cout << tot << endl;

	return 0;
}