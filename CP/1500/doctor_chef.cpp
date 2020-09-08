// // // ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

// // #include<bits/stdc++.h>
// // using namespace std;

// // #define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// // #define fo(i,n) for(int i=0;i<n;i++)
// // #define Fo(i,k,n) for(int i=k;i<n;i++)
// // #define for1(i,n) for(int i=1;i<=n;i++)
// // #define dloop(i,n) for(int i=n-1;i>=0;i--)
// // #define iii tuple<int,int,int>
// // #define vi vector<int>
// // #define ii pair<int,int>
// // #define vii vector<ii>
// // #define int long long
// // #define ld long double
// // #define pb push_back
// // #define endl "\n"
// // #define setbits __builtin_popcountll
// // #define mp map<int,int>
// // #define F first
// // #define S second
// // #define sz(v) (int)v.size()
// // #define mod 1000000007
// // #define inf (int)1e18

// // int32_t main(){
// // 	NINJA;

// // 	int t; cin >> t;
// // 	while(t--){
// // 		int n,x; cin >> n >> x;
// // 		vi a(n);
// // 		fo(i,n) cin >> a[i];
// // 		mp m;
// // 		// set<int> s;
// // 		fo(i,n) m[a[i]]++;
// // 		int mxn = *max_element(a.begin(), a.end());
// // 		int cnt = 0;
// // 		int temp = mxn;
// // 		while(x < mxn){
// // 			int rem = mxn - x;
// // 			x *= 2;
// // 			mxn = min(temp,x+rem);
// // 			cnt++;
// // 		}
// // 		// cout << cnt << endl;
// // 		if(n>=cnt) cnt += (n-cnt);
// // 		else cnt += m[temp];
// // 		cout << cnt << endl;
// // 	}
	
// // 	return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// int max_(int x, int y){
// 	if(x>y) return x;
// 	else return y;
// }

// int main(){
// 	int _;
// 	cin >> _;
// 	while(_--){
// 		long long n,x;
// 		cin >> n >> x;
// 		int temp = x;
// 		vector<long long> a(n);
// 		for(long long i=0;i<n;i++) cin >> a[i];
// 		long long j=0;
// 		sort(a.begin(), a.end());
// 		for(j=1;j<n;j++){
// 			if(a[j] >= x) break;
// 		}

// 		if(j) x = max_(2*a[j-1],x);
// 		long long cnt =0;
// 		for(long long i=j;i<n;i++){
// 			while(x < a[i]){
// 				x *= 2;
// 				cnt++;
// 			}
// 			x = a[i]*2;
// 			cnt++;
// 		}
// 		int mx1 = cnt+j;
// 		cout << mx1 << endl;

// 		// int mx2 = 0;
// 		// for(long long i=0;i<n;i++){
// 		// 	while(temp < a[i]){
// 		// 		temp *= 2;
// 		// 		mx2++;
// 		// 	}
// 		// 	temp = a[i]*2;
// 		// 	mx2++;
// 		// }
// 		// cout << min(mx1,mx2) << endl;
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

int n,x;
vi arr;

void init(){
	arr.clear();
}

void read(){
	cin >> n >> x;
	fo(i,n){
		int t; cin >> t;
		arr.pb(t);
	}
	sort(arr.begin(), arr.end());
}

void solve(){
	int maxI = 0;
	while(maxI<n && arr[maxI] < x){
		maxI++;
	}
	if(maxI!=0) x = max(2*arr[maxI-1],x);
	int ans =0 ;
	
	Fo(i,maxI,n){
		while(x < arr[i]) x*=2, ans++;
		x = 2*arr[i];
		ans++;
	}
	ans += maxI;
	cout << ans << endl;
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