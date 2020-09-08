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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

string s; 
int n;

int check(int m){
	int sum = 0;
	map<char,int> mm;
	fo(i,n){
		mm[s[i]]++;
	}

	for(auto it : mm){
		sum += abs(it.second-m);
	}
	return sum;


}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		cin >> s;
		sort(s.begin(), s.end());
		n = sz(s);
		int l=0,r=n;
		int ans = inf;
		while(l<=r){
			int m = (l+r)/2;
			int val = check(m);
			if(val<ans){
				ans = min(ans,val);
				r = m-1;
			}else{
				l = m+1;
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}