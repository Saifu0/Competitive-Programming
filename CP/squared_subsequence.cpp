// #include<bits/stdc++.h>
// using namespace std;

// #define deb(x) cout << #x << " " << x << endl;
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,k,n) for(int i=k;i<n;i++)
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define ll long long
// #define pb push_back
// #define endl "\n"
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007

// void c_p_c()
// {
// 	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// }

// const int mxn = 2e6;


// int main(){
// 	c_p_c();

// 	int t; cin >> t;
// 	while(t--){
// 		int n; cin >> n;
// 		int a[n];
// 		int cnt = 0;
         
// 		fo(i,n) cin >> a[i];

// 		fo(i,n){
// 			unsigned ll ans = a[i];
// 			if(ans%2==1 || ans%4==0) cnt++;
// 			Fo(j,i+1,n){
// 				ans *= a[j];
// 				if(ans%2==1 || ans%4==0) cnt++;
// 			}
// 		}
		
// 		cout << cnt << endl;
// 	}

// 	return 0;
// } 

#include<bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(){
	c_p_c();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int odd=0,even=0,four=0;
		fo(i,n){
			cin >> a[i];
			if(a[i]%2) odd++;
			if(a[i]%2==0) even++;
			if(a[i]%4==0) four++;
		}
		//even--;
		ll ans = (n*four) + (odd*(odd+1))/2 + (even*(even+1))/2;
		cout << ans << endl;
	}

	return 0;
}