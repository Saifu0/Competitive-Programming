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
ll a[mxn];

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		ll n; cin >> n;

		fo(i,n) cin >> a[i];


		//ll mn = INT_MIN, mx = INT_MIN;

		bool tog = false;
		if(a[0]<0) tog = true;

		ll sum = 0;

		int i = 0;
		while(i<n){
			if(!tog){
				int j=i;
				ll mx = INT_MIN;
				while(j<n && a[j]>0){
					mx = max(mx,a[j]);
					j++;
				}
				sum += mx;
				i = j;
				tog = !tog;
			}else{
				int j = i;
				ll mn = INT_MIN;
				while(j<n && a[j]<0){
					mn = max(mn,a[j]);
					j++;
				}
				sum += mn;
				i = j;
				tog = !tog;
			}
		}

		cout << sum << endl;
	}

	return 0;
}