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

vii a;
int n;
int val;

int check(int cur){
	int div;
	fo(i,n){
		div =1;
		if(cur < 1900) div=2;
		if(div!=a[i].S){
			if(div==2) return 0;
			else return -1;
		}
		cur += a[i].F;
	}
	val = cur;
	return 1;
}

int32_t main(){
    NINJA;

	cin >> n;
	bool ok = 1;


	fo(i,n){
		int x,y; cin >> x >> y;
		a.pb({x,y});
	}

	fo(i,n-1){
		ok &= (a[i].S==a[i+1].S);
	}

	if(ok && a[0].S==1){
		cout << "Infinity" << endl;
		return 0;
	}
	/*
	int cur = 0;
	fo(i,n){
		if(i==0){
			if(a[i].S==1) cur = 1901+a[i].F;
			else cur = 1899 + a[i].F;
			continue;
		}
		cur += a[i].F;
		if((cur > 1899 && a[i].S == 2) || (cur < 1900 && a[i].S==1)){
			cout << "Impossible" << endl;
			return 0;
		}
	}*/
	//reverse(all(a));
	int l = -inf , r = inf;
	int ans = -1;
	while(r>l){
		int m = (l+1+r)/2;
		int aa=  check(m);
		if(aa==0) l = m+1;
		else if(aa==-1) r=  m-1;
		else l = m;
	}

//	if(check(2054)) cout << "yes" << endl;
	if(check(l)!=1) cout << "Impossible" <<endl;
	else cout << val << endl;
    
    return 0;
}

