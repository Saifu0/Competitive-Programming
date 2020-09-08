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

	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		vi a(n),p(n);

		fo(i,n) cin >> a[i];
		fo(i,m){
			int x; cin >> x;
			p[x-1] = 1;
		}

		int i=0;
		while(i<n){
			if(p[i]==0){
				i++; continue;
			}
			int j = i;

			while(j<n && p[j]) j++;
			sort(a.begin()+i,a.begin() + j + 1);
			i = j;
		}

		bool ans = true;

		Fo(i,1,n){
			ans &= (a[i-1] <= a[i]);
		}

		if(ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}