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

const int mxn = 110;
int a[mxn];

int32_t main(){
	NINJA;
  	freopen("swap.in", "rt", stdin);
 	freopen("swap.out", "wt", stdout);	
	int n,k,a1,a2,b1,b2; cin >> n >> k >> a1 >> a2 >> b1 >> b2;
	vi a(n);
	fo(i,n) a[i] = i;
	--a1,--a2,--b1,--b2;
	int cycle = 0;
	bool ok;
	do{
		cycle++;
		ok = 1 ;
		reverse(a.begin()+a1,a.begin()+a2+1);
		reverse(a.begin()+b1,a.begin()+b2+1);

		fo(i,n) ok &= (a[i]==i);
	}while(!ok);

	// cout << cycle << endl;

	k %= cycle;
	fo(i,k){
		reverse(a.begin()+a1,a.begin()+a2+1);
		reverse(a.begin()+b1,a.begin()+b2+1);
	}
	fo(i,n) cout << a[i]+1 << endl;

	return 0;
}