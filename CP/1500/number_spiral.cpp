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
		ll x,y; cin >> x >> y;

		if(x<y){
			if(y%2==1){
				ll r = y*y;
				cout << r - x + 1 << endl;
			}else{
				ll r = (y-1)*(y-1) + 1;
				cout << r + x - 1 << endl;
			}
		}else{
			if(x%2==0){
				ll r = x*x;
				cout << r - y + 1 << endl;
			}else{
				ll r = (x-1)*(x-1) + 1;
				cout << r + y - 1 << endl;
			}
		}
	}

	return 0;
}