// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define all(a) a.begin(),a.end()
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

const int mxn = 110;
int a[mxn];

int32_t main(){
    NINJA;

	int n,d; cin >> n >> d;
	for1(i,n) cin >> a[i];

	sort(a+1,a+n+1,greater<int>());
	int ans = 0;
	int start =  0;

	for1(i,n){
		if(start + a[i] > d){
			cout << -1 << endl;
			return 0;
		}
		start += a[i];
		ans += min((d-start)/5,2ll);
		start += min((d-start),10ll);
	}

	ans += (d-start)/5;

	cout << ans << endl;
    
    return 0;
}
