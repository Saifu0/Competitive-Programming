// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

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

bool cmp(pair<ld,int> x, pair<ld,int> y){
	if(x.F == y.F) return x.S < y.S;
	else return x.F > y.F;
}

int t1,t2;
double k;
inline double fuck(int v,int u){
	double x = .0;
	x += (double)v * (double)t1;
	x *= (100.0 - k)/100.0;
	x += (double)u * (double)t2;
	return x;
}

int32_t main(){
	NINJA;

	int n; cin >> n >> t1 >> t2 >> k;

	vector<pair<ld,int>> a;

	for1(i,n){
		ld x,y; cin >> x >> y;
		a.pb({-max(fuck(x,y),fuck(y,x)),i});
	}  

	sort(a.begin(), a.end());

	for(auto i : a){
		cout << i.S << " " << fixed << setprecision(2) << -i.F << endl;
	}
	
	return 0;
}