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

const int mxn = 1e5+500;

struct interval {
	int s,e;
} inv[mxn];

bool cmp(interval a, interval b){
	return a.e < b.e;
}

int main(){
	NINJA;
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int mn = 1e9;
		fo(i,n){
			cin >> inv[i].s >> inv[i].e;
			mn = min(inv[i].s,mn);
		}

		sort(inv,inv+n,cmp);

		int cnt = 0;
		mn--;

		fo(i,n){
			if(inv[i].s > mn){
				cnt++;
				mn = inv[i].e;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}