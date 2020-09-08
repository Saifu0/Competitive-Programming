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

const int mxn = 2e5+500;
int store[mxn];

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		fo(i,n){
			int temp; cin >> temp;
			store[temp-1] = i;
		}

		int lo = n, hi = 0;

		string ans = "";
		fo(i,n){
			lo = min(lo,store[i]);
			hi = max(hi,store[i]);
			if(hi-lo==i) ans += '1';
			else ans +='0';
		}

		cout << ans << endl;
	}

	return 0;
}