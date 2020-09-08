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

	int n; cin >> n;
	string s; cin >> s;

	
	int sum = 0;
	fo(i,n){
		bool ok = 1;
		sum += s[i]-'0';
		int sum2 = 0;
		for(int j=i+1;j<n;j++){
			sum2 += s[j]-'0';
			int sum3 = 0;
			for(int k=j+1;k<n;k++){
				sum3 += s[k]-'0';
			}
			if(sum2==sum3 && sum2==sum){
				cout << "YES" << endl;
				return 0;
			}
		}

		// if(sum2!=sum) ok  = false;
		// if(ok){
		// 	cout << "YES" <<  endl;
		// 	return 0;
		// }
		
		
	}

	cout << "NO" << endl;
	
	return 0;
}