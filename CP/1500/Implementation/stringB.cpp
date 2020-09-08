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
	
	string s; cin >> s;
	int n = sz(s);

	bool ok = 1;
	fo(i,n){
		ok = ok && ((s[i]-'0')%2==1);
	}

	if(ok==1){
		cout << "-1" << endl;
		return 0;
	}

	int mn = inf,idx;
	fo(i,n){
		int x = s[i]-'0';
		if(x%2==0){
			idx = i;
			if(s[n-1] > s[i]){
				break;
			}
			
		}
	}

	swap(s[idx],s[n-1]);
	cout << s << endl;

	return 0;
} 