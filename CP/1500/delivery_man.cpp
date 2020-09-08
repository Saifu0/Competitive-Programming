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

const int mxn = 1e5+500;
int x,y;
int a[mxn],b[mxn];
int n;

int main(){
	NINJA;

	cin >> n >> x >> y;
	fo(i,n) cin >> a[i];
	fo(i,n) cin >> b[i];

	ll sum = 0;

	int c[mxn];
	fo(i,n){
		sum += a[i];
		c[i] = b[i]-a[i];
	}

	sort(c,c+n,greater<int>());

	ll res = -1;


	fo(i,n){
		sum += c[i];
		if(i >= n-x-1) res = max(res,sum);
	}

	cout << res << endl;



	return 0;
}