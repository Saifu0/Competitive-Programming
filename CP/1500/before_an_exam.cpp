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

const int mxn = 32;
int L[mxn],R[mxn];
vi g[mxn];

int32_t main(){
	NINJA;

	int n,k; cin >> n >> k;
	int sumL = 0, sumR = 0;
	fo(i,n) cin >> L[i] >> R[i], sumR += R[i], sumL += L[i];
	if(sumR < k || sumL > k){
		cout << "NO" << endl;
		return 0;
	}

	cout << "YES" << endl;
	int sum =sumL;
	k -= sum;
	fo(i,n){
		int val= min(R[i]-L[i],k);
		k -= val;
		L[i] += val;
	}
	fo(i,n) cout << L[i] << " ";

	
	return 0;
}