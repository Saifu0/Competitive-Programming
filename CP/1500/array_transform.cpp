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
	int t; cin >>t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		mp m;
		fo(i,n){
			cin >> a[i];
			a[i]=a[i]%(k+1);
			m[a[i]]++;
		}

		bool flag = false;
		for(auto it=m.begin();it!=m.end();it++){
			if(it->S>=n-1){
				flag = true;
				break;;
			}
		}
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}