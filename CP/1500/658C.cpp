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

void solveC1(){
	int n; cin >> n;
	string a,b; cin >> a >> b;
	vi ans;
	for(int i=n-1;i>=0;i--){
		if(a[i]==b[i]) continue;
		if(b[i]!=a[0]){
			ans.pb(i+1);
			fo(j,i+1){
				if(a[j]=='1') a[j] = '0';
				else a[j] = '1';
			}
			reverse(a.begin(),a.begin()+i+1);
		}else{
			ans.pb(1);
			a[0] = ( a[0]=='1' ? '0' : '0');
			ans.pb(i+1);
			fo(j,i+1){
				if(a[j]=='1') a[j] = '0';
				else a[j] = '1';
			}
			reverse(a.begin(),a.begin()+i+1);
		}
	}
	cout << sz(ans) << " ";
	for(int i  : ans) cout << i << " ";
	cout << endl;
}

void solveC2(){
	int n; cin >> n;
	string a,b; cin >> a >> b;
	int id = n-1;
	int zero = 0;
	int tog = 0;
	int rev = 1;
	vi ans;
	dloop(i,n){
		if((a[id]^tog)==b[i]){
			id -= rev;
			continue;
		}
		if((a[zero]^tog)==b[i]){
			ans.pb(1);
			a[zero] ^= 1;
			if(i==0) break;
		}
		ans.pb(i+1);
		tog ^= 1;
		rev = rev*-1;
		swap(id,zero);
		id -= rev;
	}
	cout << sz(ans) << " ";
	for(int i : ans) cout << i << " ";
	cout << endl;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		// solveC1();
		// solveC2();
		char a = '1', b = '0';
		cout << (int)a << " " << (int)b << endl;
		cout << (a^1) << endl;
		cout << (a^0) << endl;
		cout << (b^1) << endl;
		cout << (b^0) << endl;

	}
	
	return 0;
}