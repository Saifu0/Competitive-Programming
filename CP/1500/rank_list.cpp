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

const int mxn = 55;

vector<ii> tt;
int n,k;

bool cmp(ii a, ii b){
	if(a.F != b.F) return a.F > b.F;
	return a.S < b.S;
}

int main(){
	NINJA;
	cin >> n >> k;
	fo(i,n) {
		int f,s; cin >> f>> s;
		tt.pb({f,s});
	}

	sort(tt.begin(),tt.end(),cmp); 
	ii f = tt[k-1];

	int cnt = 0;
	fo(i,n){
		if(f==tt[i]) cnt++;
	}

	cout << cnt << endl;



	return 0;
}