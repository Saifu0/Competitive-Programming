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
#define inf (int)1e18

int32_t main(){
	NINJA;

	int n,k; cin >> n >> k;
	vi a;

	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if(n/i==i) a.pb(i);
			else{
				a.pb(n/i);
				a.pb(i);
			}
		}
	}

	sort(a.begin(), a.end());

	if(a.size() < k){
		cout << -1 << endl;
	}else{
		cout << a[k-1] << endl;
	}

	
	return 0;
}