// #include<bits/stdc++.h>
// using namespace std;

// #define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,k,n) for(int i=k;i<n;i++)
// #define iii tuple<int,int,int>
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define int long long
// #define pb push_back
// #define endl "\n"
// #define setbits __builtin_popcountll
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007
// #define inf (int)1e18

// int32_t main(){
// 	NINJA;

// 	int t; cin >> t;
// 	while(t--){
// 		int n,k; cin >> n >> k;

// 		int  sum = 0;
// 		fo(i,n){
// 			int x; cin >> x;
// 			if(x > k) sum += x - k;
// 		}
// 		cout << sum << endl;
// 	}
	
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin >> test;
	for(int t=0;t<test;t++){
		int n,k;
		cin >> n >> k;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int ans = 0;
		for(int i=0;i<n;i++){
			if(arr[i]>k) ans += arr[i] - k;
		}
		cout << ans << endl;
	}
}