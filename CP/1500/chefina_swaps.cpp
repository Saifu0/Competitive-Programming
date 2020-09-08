// #include<bits/stdc++.h>
// using namespace std;

// #define int long long

// const int inf = INT_MAX;

// map<int,int> mp1,mp2;
// vector<int> a1,a2;
// int n,x;
// bool ok = false;
// int mn = inf;

// void print(int x){
// 	printf("%lld\n",x);
// }

// int32_t main(){
// 	int _;
// 	cin >> _;
// 	while(_--){
// 		mp1.clear();
// 		mp2.clear();
// 		a1.clear();
// 		a2.clear();
// 		ok = false;
// 		mn = inf;

// 		scanf("%lld",&n);
// 		for(int i=0;i<n;i++){
// 			scanf("%lld",&x);
// 			mp1[x]++;
// 		}

// 		for(int i=0;i<n;i++){
// 			scanf("%lld",&x);
// 			mp2[x]++;
// 		}

// 		for(auto it : mp1){
// 			if((it.second+mp2[it.first])&1){
// 				ok = true;
// 				break;
// 			}
// 			int temp = it.second - mp2[it.first];
// 			if(temp > 0){
// 				for(int i=0;i<temp/2;i++){
// 					a1.push_back(it.first);
// 				}
// 			}
// 			mn = min(mn,it.first);
// 		}
// 		if(ok){
// 			print(-1);
// 			continue;
// 		}

// 		for(auto it : mp2){
// 			mn = min(mn,it.first);
// 			if((it.second+mp1[it.first])&1){
// 				ok = true;
// 				break;
// 			}
// 			int temp = it.second - mp1[it.first];
// 			if(temp > 0){
// 				for(int i=0;i<temp/2;i++){
// 					a2.push_back(it.first);
// 				}
// 			}
// 		}

// 		if(ok){
// 			print(-1);
// 			continue;
// 		}

// 		int cnt = 0;
// 		for(int i=0;i<a1.size();i++){
// 			int temp = min(a1[i],a2[a1.size()-i-1]);
// 			cnt += min(temp,2*mn);
// 		}
// 		print(cnt);
// 	}
// }

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

mp x,y;
vi a,b;
int n;

void init(){
	a.clear();
	b.clear();
	x.clear();
	y.clear();
}

void read(){
	cin >> n;
	for1(i,n){
		int t; cin >> t;
		x[t]++;
	}
	for1(i,n){
		int t; cin >> t;
		y[t]++;
	}
}

void solve(){
	int mxn = inf, f = false;
	for(auto i : x){
		if((i.S+y[i.F])&1){
			f = true;
			break;
		}
		int t = i.S - y[i.F];
		if(t > 0){
			for(int j=0;j<t/2;j++){
				a.push_back(i.F);
			}
		}
		mxn = min(mxn,i.F);
	}
	if(f==true){
		cout << -1 << endl;
		return;
	}

	for(auto i : y){
		mxn = min(mxn,i.F);
		if((i.S+x[i.F])&1){
			f = true;
			break;
		}
		int t = i.S - x[i.F];
		if(t > 0){
			for(int j=0;j<t/2;j++){
				b.push_back(i.F);
			}
		}
	}

	if(f==true){
		cout << -1 << endl;
		return;
	}

	int cnt = 0;
	fo(i,sz(a)){
		int t = min(a[i],b[a.size()-i-1]);
		cnt += min(t,2*mxn);
	}
	cout << cnt << endl;
}


int32_t main(){
	NINJA;

	int test; cin >> test;
	while(test--){
		init();
		read();
		solve();
	}
	
	return 0;
}