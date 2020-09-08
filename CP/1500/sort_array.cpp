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
	
	int n; cin >> n;
	vi a(n),b(n);
	fo(i,n) cin >> a[i], b[i] = a[i];

	sort(b.begin(), b.end());
	int j=0,k=0;
	bool f = 0;
	fo(i,n){
		if(!f && a[i]!=b[i]){
			j = i;
			f = 1;
		}
		if(f&&a[i]!=b[i]){
			k = i;
		}

	}

	reverse(a.begin()+j,a.begin()+k+1);
	// fo(i,n) cout << a[i] << " ";

	bool ok = 1;
	fo(i,n) ok = ok&&(a[i]==b[i]);

	if(ok){
		cout <<"yes" << endl;
		cout << j+1 << " " << k+1 << endl;
	}else{
		cout << "no" << endl;
	}

	return 0;
}