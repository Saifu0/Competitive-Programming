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

	int n,k; cin >> n >> k;
	vi a(n);
	fo(i,n) cin >> a[i];
	sort(a.begin(), a.end());
	int cnt = 0;
	int i =0,j=n-1;
	while(i<=j){
		int sum = 0;
		int c=0;
		while(sum < k){
			bool f=1,g=1;
			if(j>=i && sum + a[j] <= k){
				sum += a[j];
				j--;
				c++;
				f=0;
			}
			if(c==2) break;
			if(i<=j && sum + a[i] <= k){
				sum += a[i];
				i++;
				c++;
				g=0;
			}
			if(c==2) break;
			if(f&&g) break;
		}
		cnt++;
	}
	cout << cnt << endl;
	
	return 0;
}