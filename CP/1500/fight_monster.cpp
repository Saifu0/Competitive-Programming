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

	int n,a,b,k; cin >> n >> a >> b >> k;
	vi ar(n);

	fo(i,n){
		cin >> ar[i];
		ar[i] %= (a+b);
		if(ar[i]==0) ar[i] += (a+b);
		ar[i] = ((ar[i]-1)/a +1 ) -1;
	}

	sort(ar.begin(), ar.end());
	int ans = 0;

	fo(i,n){
		if(k-ar[i]<0) break;
		ans++;
		k -= ar[i];
	}

	cout << ans << endl;
	
	return 0;
}