#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
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
#define inf (int)1e9

vi a;

int binary(int n){
	int l=0,r=sz(a)-1;
	int ans = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(n>=a[m]){
			ans = a[m];
			l = m+1;
		}else{
			r = m-1;
		}
	}
	return ans;
}

int32_t main(){
	NINJA;

	
	int k = 1;
	while(true){
		int aa = ((3*(k*k))+k)/2;
		if(aa>inf){
			break;
		}
		a.pb(aa);
		k++;
	}

	//cout << a.size() << endl; 

	//for(auto it : a) cout << it << " ";

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt=0;
		while(true){
			int aa = binary(n);
			if(aa==-1) break;
			cnt++;
			n -= aa;
		}
		cout << cnt << endl;
	}
	
	return 0;
}