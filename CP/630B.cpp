#include<bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(){
	c_p_c();

	int prime[] = {2,3,5,7,11,13,17,19,23,29,31};
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n]; 
		fo(i,n) cin >> a[i];
		int ans[n];
		fo(i,n) ans[i] = -1;

		int cnt = 1;
		fo(i,11){
			bool got = false;
			fo(j,n){
				if(ans[j]!=-1) continue;
				if(a[j]%prime[i]) continue;
				got=true;
				ans[j] = cnt;
			}
			if(got) cnt++;
		}
		cout << cnt-1 << endl;
		fo(i,n) cout << ans[i] << " ";
		cout << endl;
	}

	return 0;
}