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

struct d {
	int f,s,dif;
};

bool cmp(d x, d y){
	return x.dif > y.dif;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >> x;
		vector<d> a;

		//bool ok = false;
		int mx = -inf;
		fo(i,n){
			int f,s; cin >> f >> s;
			d dd;
			dd.f = f, dd.s = s, dd.dif = f-s;
			a.pb(dd);
			//ok |= f > s;
			mx = max(mx,f);
		}

		// if(!ok && x){
		// 	cout << -1 <<  endl;
		// 	continue;
		// }

		sort(a.begin(), a.end(),cmp);

		int cnt = 1;
		int mxn = a[0].dif;
		x -= mx;

		if(x>0){
			//x += a[0].s;
			// cnt += (x + mxn -1)/mxn;
			if(mxn <= 0) {
				cout << -1 << endl;
				continue;
			}
			else cnt += (x+mxn -1)/mxn;
		}

		cout << cnt << endl;


	//	cout << cnt << endl;

	}
	
	return 0;
}