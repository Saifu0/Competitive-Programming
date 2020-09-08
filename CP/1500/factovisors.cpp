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

void not_print(int n, int m){
	cout << m << " does not divide " << n <<"!" << endl;
}

void print(int n, int m){
	cout << m << " divides " << n << "!" << endl;
}

int solve(int n, int m){
	vii a;
	int t = m;
	int cnt = 0;
	while(t%2==0){
		t /= 2;
		cnt++;
	}
	a.pb({2,cnt});
	for(int i=3;i*i<=m;i+=2){
		cnt=0;
		while(t%i==0){
			t/=i;
			cnt++;
		}
		a.pb({i,cnt});
	}
	if(t!=1) a.pb({t,1});

	for(auto p : a){
		int ff = p.F;
		while(p.S>0){
			if(ff>n) return 0;
			p.S -= n/ff;
			ff *= p.F;
		}
	}
	return 1;
}

int32_t main(){
	NINJA;

	int n,m; 
	while(cin >> n >> m){
		if(m==0){
			not_print(n,m);
			continue;
		}
		if(solve(max(1ll,n),m)){
			print(n,m);
			continue;
		}else{
			not_print(n,m);
		}
	}
	
	return 0;
}