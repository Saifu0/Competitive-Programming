#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(ll i=0;i<n;i++)
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

bool cmp(ii a, ii b){
	return a.F < b.F;
}

int main(){
	NINJA;

	int n; cin >> n;
	vector<pair<ll,bool>> a;

	fo(i,n){
		ll f,s; cin >> f >> s;
		a.pb({f,true});
		a.pb({s,false});
	}

	sort(a.begin(), a.end());

	int cnt = 0;
	int mxn = INT_MIN;

	for(auto i : a){
		if(i.S) cnt++;
		else cnt--;

		mxn = max(mxn,cnt);
	}

	cout << mxn << endl;
	return 0;
}