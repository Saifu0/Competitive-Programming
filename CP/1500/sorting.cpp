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

// const int mxn = 1e4+10;
// ii a[mxn];

// bool cmp(ii x, ii y){
// 	return x.F < y.F;
// }

// int32_t main(){
// 	NINJA;

// 	int n,k; cin >> n >> k;

// 	fo(i,n){
// 		cin >> a[i].S;
// 		a[i].F = a[i].S;
// 		a[i].F %= k;
// 	}

// 	sort(a,a+n,cmp);

// 	fo(i,n) cout << a[i].S << " ";
	
// 	return 0;
// }

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

// string a[50];

// int32_t main(){
// 	NINJA;

// 	string s; cin >> s;
// 	int idx; cin >> idx;

// 	int n = sz(s);

// 	fo(i,n){
// 		a[i] = s.substr(i);
// 	}

// 	sort(a,a+n);

// 	// fo(i,n) cout << a[i] << " ";

// 	cout << a[idx-1] << endl;
	
// 	return 0;
// }

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

const int mxn = 1234;
string b[mxn];
pair<string,int> a[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;

	fo(i,n) cin >> b[i];

	fo(i,n){
		int cnt = 0;
		for(int j=i;j>=0;j--){
			if(b[j] < b[i]) cnt++;
		}

		cout << cnt << endl;
	}

	return 0;
}