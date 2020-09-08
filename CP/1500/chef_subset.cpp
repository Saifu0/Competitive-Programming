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

	int t;cin >> t;
	while(t--){
		int a[4];
		fo(i,4) cin >> a[i];

		int tot = 1<<4;

		bool flag = false;

		for(int mask=1;mask<tot;mask++){
			int sum = 0;
			for(int i=0;i<4;i++){

				int f = 1<<i;
				if((mask&f)!=0){
					sum += a[i];
				}
			}
			if(sum==0){
				flag = true;
				cout << "Yes" << endl;
				break;
			}
		}
		if(!flag) cout << "No" << endl;
	}

	return 0;
}