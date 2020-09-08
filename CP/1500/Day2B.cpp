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

const int mxn = 123;
int a[mxn];

int main(){
	NINJA;

	int n; cin >> n;

	int tot = 0;

	fo(i,n){
		cin >> a[i];
		tot += a[i];
	}

	tot = (tot)/2;

	int cnt = 0;
	sort(a,a+n);

	int cc = 0;
	for(int i=n-1;i>=0;i--){
		cc += a[i];
		cnt++;

		if(cc>tot){
			break;
		}
	}

	cout << cnt << endl;

	return 0;
}