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
#define mod 1073741824 
#define inf (int)1e18

int32_t main(){
	NINJA;

	int a,b,c; cin >> a >> b >> c;
	vi st;
	for1(i,a){
		for1(j,b){
			for1(k,c){
				st.pb(i*j*k);
			}
		}
	}

	int sum = 0;

	for(int i : st){
		mp m;
		while(i%2==0){
			m[2]++;
			i /= 2;
		}

		for(int j=3;j<i;j+=2){
			while(i%j==0){
				m[j]++;
				i /= j;
			}
		}
		if(i > 1) m[i]++;

		int mul = 1;
		for(auto it : m){
			mul *= (it.S+1);
		}
		sum += mul;
	}

	cout << sum << endl;

	
	return 0;
}