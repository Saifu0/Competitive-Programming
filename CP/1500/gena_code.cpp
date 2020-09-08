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

const int mxn = 1e5+10;
string a[mxn];

int32_t main(){
	NINJA;

	int n; cin >> n;
	fo(i,n) cin >> a[i];

	int mul = 1;

	fo(i,n){
		if(a[i]=="0"){
			cout << 0 << endl;
			return 0;
		}
	}

	// cout << "bitch\n";

	string ans = "1";
	int zeros = 0;
	fo(i,n){
		string x = a[i];
		int len = sz(x);
		int j = len-1;
		while(j>=0){
			if(j==0 && x[j]=='1') break;
			char c = x[j];
			if(c!='0'){
				ans = x.substr(0,j+1);
				break;
			}else{
				zeros++;
			}
			j--;
		}
	}

	cout << ans;
	fo(i,zeros) cout << 0;
	cout << endl;
	
	return 0;
}