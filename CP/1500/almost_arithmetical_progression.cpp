#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
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

const int mxn = 4010;
int a[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;
	fo(i,n) cin >> a[i+1];

	int mx = 1;

	for1(i,n){
		int cnt = 1;
		int j = 2;
		int aa = a[i];
		int q = a[i];
		Fo(k,i+1,n){
			if((aa + pow(-1,j+1)*q)==a[k]){
				j++;
				aa = a[k];
				cnt++;
			}
		}
		mx = max(mx,cnt);
	}
	cout << mx << endl;
	
	return 0;
}