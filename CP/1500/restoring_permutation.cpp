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

const int mxn = 123;
int a[mxn];
int vis[2*mxn];
vi b;

int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		fo(i,2*mxn) vis[i] = 0;

		b.clear();
		fo(i,n) cin >> a[i], vis[a[i]] = 1;

		int exceed = 2*n;

		bool flag = false;
		fo(i,n){
			//int store = a[i];
			int temp = a[i];
			while(vis[temp]){
				temp++;
			}

			if(temp > exceed){
				flag = true;
				break;
			}

			b.pb(a[i]);
			b.pb(temp);
			vis[temp] = 1;
		} 

		if(flag){
			cout << -1 << endl;
			continue;
 		}else{
 			for(int i : b){
 				cout << i << " " ;
 			}
 		}
 		cout << endl;
	}

	return 0;
}