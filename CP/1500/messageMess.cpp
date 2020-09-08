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

int solve(int i, vector<string> a, string s,string trial){
	if(trial == s) return 1;
	if(i >= a.size()) return 0;

	int ans = solve(i+1,a,s,trial) + solve(i+1,a,s,trial+a[i]);
	return ans;
}

// string solve2(int i,vector<string> a, string s){
// 	if(i>=a.size()) return "";

// 	string ans = a[]
// }

string restore(vector<string> a, string s){
	int cnt = solve(0,a,s,"");
	if(cnt==0){
		return "IMPOSSIBLE!";
	}else if(cnt==2){
		return "AMBIGUOUS!";
	}else{
		return solve2(0,a,s);
	}
}

int32_t main(){
	NINJA;

	vector<string> a;
	string s;

	int n; cin >> n;
	fo(i,n){
		string x; cin >> x;
		a.pb(x);
	}

	cin >> s;

	cout << restore(a,s) << endl;
	
	return 0;
}