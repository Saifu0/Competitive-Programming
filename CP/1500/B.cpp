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

void solve(){
	int n; cin >> n;
	vi a(n),b(n);
	fo(i,n) cin >> a[i];
	fo(i,n) cin >> b[i];

	bool inc = false, dec = false;
	fo(i,n){
		if(b[i]>a[i] && !inc){
			cout << "NO" << endl;
			return;
		}
		if(b[i]<a[i] && !dec){
			cout << "NO" << endl;
			return;
		}
		if(a[i]==1){
			inc = true;
		}
		if(a[i]==-1){
			dec = true;
		}
	}
	cout << "YES" << endl;
}

int main(){
	NINJA;
	int t; cin >>t ;
	while(t--){
		solve();
	}

	return 0;
}