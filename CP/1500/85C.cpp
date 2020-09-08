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

struct dat {
	ll a,b,id;
};	

bool cmp(dat x, dat y){
	return x.a < y.a;
}

int main(){
	NINJA;
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		dat d[n];
		fo(i,n){
			cin >> d[i].a >> d[i].b;
			d[i].id = i; 
		}

		sort(d,d+n,cmp);

		ll cnt = 0;
		fo(i,n){
			if(d[i].d >0 ){
				cnt += d[i].a;
				d[i].a = 0;
				if(d[i].id < n){
					d[d[i].id+1] = d[d[i].id+1].a - d[i].b;
				}
			}
		}

		cout << cnt << endl;
	}

	return 0;
}