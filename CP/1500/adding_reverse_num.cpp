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



int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		string a,b; cin >> a>> b;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		int n =sz(a), m = sz(b);

		if(n < m) swap(a,b);

		
		n = sz(a), m = sz(b);
		string zeros = "";
		fo(i,n-m) zeros += '0';

		b = zeros + b;

		// cout << a << " " << b << endl;
		
		string ans = "";

		int carry = 0;
		for(int i=n-1;i>=0;i--){
			int x = a[i] -'0';
			int y = b[i] -'0';

			int val = x + y + carry;

			// cout << val%10 << " ";
			if(i==0){

				string tt =to_string(val);
				// reverse(tt.begin(), tt.end());
				ans = tt + ans;
			}else{
				ans = to_string(val%10) + ans;
				carry = val/10;
				// cout << carry << " ";
			}
		}

		reverse(ans.begin(), ans.end());

		int i = 0;
		while(ans[i++]=='0');
		i--;
		ans = ans.substr(i);

		cout << ans << endl;
		
	}
	
	return 0;
}