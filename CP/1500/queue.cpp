#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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


int main(){
	NINJA;

	int n; cin >> n;
	
	vector<ll> a(n);

	fo(i,n) cin >> a[i];

	sort(a.begin(), a.end());

	ll tot = 0;

	int cnt = 0;
	int prev = 0;

	fo(i,n){
		int x = lower_bound(a.begin()+prev, a.end(),tot) - a.begin();

		// cout << a[x] << " " << tot << endl;
		// cout << x << endl;
		if(x <n && a[x] >= tot){
			cnt++;
			tot += a[x];
			prev = x+1;
		}
	}

	cout << cnt << endl;

	return 0;
}