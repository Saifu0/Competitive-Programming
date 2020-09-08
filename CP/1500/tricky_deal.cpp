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
		ll n; cin >> n;

		ll val=1,idx=1,d2=0,profit=INT_MIN;
		ll a = n;
		int cnt = 0;

		while(val<=a){
			if((a-val)>profit){
				profit=a-val;
				d2 = cnt;
			}
			val += (ll)pow(2,idx++);
			a += n;
			cnt++;
		}

		cout << cnt << " " << d2+1 << endl;
	}

	return 0;
}