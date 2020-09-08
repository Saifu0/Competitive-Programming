#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 1e5+500;
ii a[mxn];
int n;

bool cmp(ii x, ii y){
	if(x.F < y.F) return 1;
	else return (x.F==y.F) && (x.S > y.S);
}

int32_t main(){
	NINJA;

	cin >> n;
	fo(i,n) cin >> a[i].F >> a[i].S;

	int cnt = 0;

	sort(a,a+n,cmp);

	ii start = a[0];

	Fo(i,1,n){
		if(a[i].F > start.F && a[i].S < start.S) cnt++;
		else{
			start = a[i];
		}
	}

	cout << cnt << endl;
	
	return 0;
}