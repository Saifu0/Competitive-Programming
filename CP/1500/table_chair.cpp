#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(ll i=0;i<n;i++)
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
		ll m,a,b,c;
		cin >> m >> a >> b >> c;

		double bb = (double)b/2;
		double cc = (double)c/3;

		ll md = m%4;
		ll rem = 4-md;

		if(md==0) rem=0;

		ll tot = 0;

		while(rem!=0){
			if(rem==3 && cc<a && cc<bb){
				rem -= 3;
				tot += c;
			}else if(rem==2 && bb<a && bb<cc ){
				rem -= 2;
				tot += b;
			}else{
				rem -= 1;
				tot += a;
			}
		}

		cout << tot << endl;
	}

	return 0;
}