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

const int mxn =1e8;

int a[100000+50], pref[100000+50];

int32_t main(){
	NINJA;

	unordered_set<int> s;

	for(int i=0;i*i<=mxn;i++){
		s.insert(i*i);
	}

	int t;
	cin >> t;
	int start = 1;
	while(t--){
		int n; cin >> n;
		fo(i,n) cin >> a[i];

		//for(int i=1;i<=n;i++) pref[i] = pref[i-1] + a[i-1]; 

		vi x;
		int cnt = 0;


		// for(int i=1;i<=n;i++){
		// 	for(int j=i-1;j>=0;j--){
		// 	//	x.pb(pref[i]-pref[j]);
		// 		if(s.find(pref[i]-pref[j])!= s.end()) cnt++;
		// 	}
		// }

		int j =0;
		

		


	//	int cnt = 0;
		// fo(i,sz(x)){
		// 	if(s.find(x[i])!= s.end()) cnt++;
		// }

		cout << "Case #" << start++ << ": " << cnt << endl;

	}
	
	return 0;
}