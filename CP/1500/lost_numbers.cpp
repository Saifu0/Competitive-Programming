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

vi p = { 4, 8, 15, 16, 23, 42};
int ans[4];

int32_t main(){
	NINJA;

	fo(i,4){
		cout << "? " << i+1 << " " << i+2  << endl;
		cout.flush();
		cin >> ans[i];
	}

	do{
		bool ok = true;
		fo(i,4){
			ok = ok && ((p[i]*p[i+1]==ans[i]) ? true: false);
		}
		if(ok) break;
	}while(next_permutation(p.begin(), p.end()));

	cout << "!";
	fo(i,6) cout << " " << p[i];
	cout << endl;
	cout.flush();


	
	return 0;
}