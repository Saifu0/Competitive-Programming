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

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;

		string ans = "";
		int i=0;
		while(i<n && s[i]=='0'){
			ans += '0';
			i++;
		}

		string one = "";
		int j=n-1;
		while(j>=0 && s[j]=='1'){
			one += '1';
			j--;
		}

		Fo(k,i,j+1){
			if(s[k]=='0'){
				ans += '0';
				break;
			}
		}

		ans += one;
		
		cout << ans << endl;
	}
	
	return 0;
}