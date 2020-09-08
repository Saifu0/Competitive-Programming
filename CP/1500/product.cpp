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

	string a; 
	string b; 

	while(getline(cin,a)){
		cin >> b;
		vector<string> s;

		if(b > a ) swap(a,b);

		int n = sz(a);
		int m = sz(b);

		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());

		int cnt =0 ;
		fo(i,m){
			int carry = 0;
			int mul = b[i]-'0';
			string st;
			fo(j,n){
				int prod = a[j]-'0';
				prod = prod*mul + carry;
				int rem = prod%10;
				if(j==n-1){
					string sss = to_string(prod);
					reverse(sss.begin(), sss.end());
					st += sss;
				}
				else st += rem + '0';
				carry = prod/10;
			}
			reverse(st.begin(), st.end());
			fo(i,cnt) st += '0';
			s.pb(st);
			cnt++;
		}

		int carry = 0;
		int len = 0;
		for(auto i : s) len = max(len,sz(i));

		// for(auto i : s) cout << i << endl;

		string ans = "";

		for(int i=0;i<len;i++){
			int val = 0;
			for(auto it : s){
				
				if(sz(it)<=i) val = 0;
				else val += it[sz(it)-i-1] -'0';
			}
			val += carry;
			if(i==len-1) ans += to_string(val);
			else ans += (val%10) + '0';
			carry = val/10; 
		}
		reverse(ans.begin(), ans.end());
		cout << ans << endl;
	}
	
	return 0;
}