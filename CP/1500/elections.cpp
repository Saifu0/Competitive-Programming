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

const int mxn = 101;
int cnt[mxn];

int main(){
	NINJA;

	int n,m; cin >> n >> m;

	fo(i,m){
		int ind=-1, mx = INT_MIN;
		fo(j,n){
			int x; cin >>x;
			if(x>mx){
				mx = x;
				ind=j+1;
			}
		}
		cnt[ind]++;
	}

	int mx = INT_MIN;
	int ans = -1;
	fo(i,n+1){
		if(mx<cnt[i]){
			mx = cnt[i];
			ans = i;
		}
	}

	cout << ans << endl;

	return 0;
}