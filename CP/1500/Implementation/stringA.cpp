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
		string a,b;
		cin >> a >> b;
		int n = sz(a);
		int m = sz(b);
		// map<char,int> m1,m2;
		// for(char c : a) m1[c]++;
		// for(char c : b) m2[c]++;

		// set<char> s1,s2;
		// for(char c : a) s1.insert(c);
		// for(char c : b) s2.insert(c);

		// if(s1!=s2){
		// 	cout << "NO" << endl;
		// 	continue;
		// }

		// bool f = 1;
		// for(char c : s1){
		// 	if(m2[c] < m1[c]){
		// 		f =0;
		// 		break;
		// 	}
		// }

		// if(f) cout << "YES" << endl;
		// else cout << "NO" << endl;

		bool f = 1;

		int j =  0;
		fo(i,n){
			if(a[i]!=b[j]){
				f = 0;
				break;
			}

			if(a[i]!=a[i+1]){
				while(j<m && a[i]==b[j]){
					j++;
				}	
			}
			else{
				j++;
			}
		}

		if(j!=m) f = 0;
		if(f) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}