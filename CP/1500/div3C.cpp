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
		int n; cin >> n;
		mp m;



		fo(i,n){
			int x; cin >> x;
			m[x]++;
		}

		if(n==1){
			cout << 0 << endl;
			continue;
		}

		if(n==2){
			cout << 1 << endl;
			continue;
		}

		int mxn = INT_MIN;
		int cnt=0;

		for(auto it=m.begin();it!=m.end();it++){
			cnt++;
			if(it->S > mxn) mxn = it->S;
		}

		--cnt;

		if(mxn>cnt){
			if((mxn-cnt)>1){
				cout << cnt+1 << endl;
				continue;
			}else{
				cout << cnt << endl;
				continue;
			}
		}

		cout << min(cnt,mxn) << endl;
	}

	return 0;
}