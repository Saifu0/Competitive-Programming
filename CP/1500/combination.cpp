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

pair<int,int> a[1234];

int main(){
	NINJA;
	int n; cin >> n;
	fo(i,n){
		cin >> a[i+1].S >> a[i+1].F;
	}

	sort(a,a+n);

	int r = 1;
	int ans = 0;
	while(r>0 && n>0){
		ans += a[n].S;
		r += a[n].F-1;
		n--;
	}

	cout << ans << endl;

	return 0;
}